#include <iostream>
#include <vector>
#include "print.h"

int main() {
  int aa[5] = {0, 1, 2, 3, 4};
  std::vector<int> vec = {9, 8, 7, 6}; 

  print(aa, std::end(aa) - std::begin(aa));
  print(vec, vec.size());
}
