#include <iostream> 
using namespace std; 
  
// One function works for all data types.  This would work 
// even for user defined types if operator '>' is overloaded 
template <typename T> 
T myMax(T x, T y) 
{ 
   return (x > y)? x: y; 
} 

// specialization template,特化模版。没有参数，只对特定的类型进行实现。
template<>
char myMax<char>(char x, char y)
{
	cout << "Specialized template\n";
	int i = x-'0';
	int j = y-'0';
	return i+j;
}

int main() 
{ 
  cout << myMax<int>(3, 7) << endl;  // Call myMax for int 
  cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double 
  cout << myMax<char>('g', 'e') << endl;   // 调用特化模版 
  
  return 0; 
}
