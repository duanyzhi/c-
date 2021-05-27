#include <iostream>
#include  <memory> // We need to include this for shared_ptr
 

int main() {
  std::shared_ptr<float> p1 = std::make_shared<float>();
  float* p = p1.get();
  *p = 1;
  std::cout << *p << std::endl;
  p++;
  std::cout << *p << std::endl;

  // int element = 10;
  // auto p2 = std::make_shared<float[]>(element);
  // auto pl = p2.get();

  // class A(int a) {};
  // auto p3 = std::make_shared<A>(0);  // 0 for init a
}
