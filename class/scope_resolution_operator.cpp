#include <iostream>

int x; // global x

class A
{
public:
  // Only declaration
  void fun();
};

// Definition outside class using ::
void A::fun()
{
  std::cout << "fun() called" << "\n";
}

int main()
{
  A a;   // 实例
  a.fun();
  return 0;
}
