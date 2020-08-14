// C++ program to show that :: can be used to access static 
// members when there is a local variable with same name 
#include<iostream> 
using namespace std; 
   
class Test 
{ 
  static int x;  // 2个空格缩进   
 public:         // public private protected要缩进一个空格
  static int y;  // 正常两个空格缩进  
  
  // Local parameter 'a' hides class member 
  // 'a', but we can access it using :: 
  void func(int x)   
  {  
    // We can access class's static variable 
    // even if there is a local variable 
    cout << "Value of static x is " << Test::x; 
  
    cout << "\nValue of local x is " << x;   
  } 
}; 
   
// In C++, static members must be explicitly defined  
// like this 
int Test::x = 1; 
int Test::y = 2; 
   
int main() 
{ 
  Test obj;  // 初始化一个类Test，类的名字为obj 
  int x = 3 ; 
  obj.func(x); 
  
  cout << "\nTest::y = " << Test::y; 
  
  return 0; 
} 
