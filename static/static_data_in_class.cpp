#include <iostream>

class X
{
 public:
  static int i;  // class里定义的static可以被所有实例化的object共享。且storage是相同的。
  int j;
};

int X::i=1;  // i被定义，值为1。之后不能在改变i的值。

int main()
{
  X obj;
  std::cout << obj.i << " " << obj.j << "\n";
}
