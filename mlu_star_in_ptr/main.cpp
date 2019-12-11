#include <iostream>

int main() {
  int a = 2019;
  int* ptr = &a;

  std::cout << ptr << "\t" << *ptr << "\n";
  int** ptr1 = &ptr; // int**有两个*表示定义了一个指向指针的指针
  std::cout << ptr1 << "\t" << *ptr1 << "\t" << **ptr1 << "\n";
}
