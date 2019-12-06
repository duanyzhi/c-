#include <iostream>
#include <vector>
#include "print.h"

void print(const int a[], size_t size) {
  for (size_t i=0; i != size; ++i) {
    std::cout << a[i] << "\t";
  }
  std::cout << "\n";
}

void print(std::vector<int> v, size_t size) {
  for (size_t i=0; i != size; ++i) {
    std::cout << v[i] << "\t";
  }
  std::cout << "\n";
}
