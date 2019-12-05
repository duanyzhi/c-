#include <iostream>
using std::cout;

int main() {
 int *p;
 cout << "p:" << p << '\n';  
 // 0x119dae1d2
 
 // int *p1 = 1; // 错误使用，因为p1必须指向对象。1是一个数不是对象。
 int num = 1;
 int *p2 = &num;
 cout << "p2:" << p2 << "\t &num:" << &num << '\n';
 cout << "*p2:" << *p2 << '\n';

 ++p2;
 cout << "++p2:" << p2 << "\t *p2:" << *p2 << "\n"; 
 cout << sizeof(int) << "\n";

 --p2;
 cout << "--p2:" << p2 << "\t *p2:" << *p2 << "\n";

}
