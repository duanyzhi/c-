#include <iostream>
#include "add.h"  // must include .h first, define before using

int main() {
  std::cout << fun(1) << "\n";
}

int fun(int x) {
  return x + 1;
}
