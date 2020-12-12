#include <iostream>

#define MACRO_COMBIN(A, B) A##B
#define _TO_STR(x) #x

int main() {
  int n = MACRO_COMBIN(123,456);
  std::cout << n << "\n";  // ptype of n is int

  std::cout << _TO_STR(10) << std::endl;
}
