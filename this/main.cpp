#include<iostream> 
using namespace std; 
 
// this 可以返回某个属性或者class本身
// When a reference to a local object is returned, 
// the returned reference can be used to chain function calls on a single object
class Test 
{ 
private: 
  int x; 
  int y; 
public: 
  Test(int x = 0, int y = 0) { 
      this->x = x;  // this 表示类自己
      this->y = y;
  }

  Test &setX(int a) { x = a; return *this; } // 引用的形式返回自己
  Test &setY(int b) { y = b; return *this; } 
  void print() { cout << "x = " << x << " y = " << y << endl; } 
}; 
  
int main() 
{ 
  Test obj1(5, 5); 
  
  // Chained function calls.  All calls modify the same object 
  // as the same object is returned by reference 
  obj1.setX(10).setY(20); 
  
  obj1.print(); 
  return 0; 
} 
