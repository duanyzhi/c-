#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
  //////////////////////////////////////////////////////
  int ival = 1024;
  int &refVal = ival;  // &表示引用，将refVal和ival值绑定在一起
  ++ival;
  cout << refVal << "," << &refVal << "," << ival << endl;
  // 1025,0x7ffee3e66a2c,1025

  //////////////////////////////////////////////////////
  int ival2 = 42;
  int *p = &ival2; // *表示p是一个内存指针,存放的是变量ival2的地址，这里是0x7ffeef7659fc
  cout << ival2 << "," << &ival2 << "," << p << "," << *p << endl;
  // 42,0x7ffeef7659fc,0x7ffeef7659fc,42
  // 输出*p是42,这里*是第二个功能，即取出指针p所指向内存的值
  *p = 10;
  cout << "new *p:" << *p << endl;

  //////////////////////////////////////////////////////
  
  int* ptr; // 指针只定义是无法使用的，需要对其分配内存空间才可以用。
  cout << ptr << "\n";

  // 指针是一个存放地址的整数
  
  //////////////////////////////////////////////////////
}
