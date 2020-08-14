#include <iostream>

void counter()
{
  static int count=0;  // static variable stored on storage area, count has its own address and scope.
  int count_ = 0;   // 非static的变量在每次调用counter函数时都被初始化为0。所以一直是0。
  std::cout << "static:" << count++ << "\n";
  std::cout << "not static:" << count_++ << "\n";
}

int main()
{
  for(int i=0; i<5; i++)
  {
    counter();
  }
}
