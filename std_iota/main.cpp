#include <iostream>
#include <list>
#include <algorithm>

int main() {
  std::list<int> l(10);
  std::iota(l.begin(), l.end(), 0);
  for (auto n : l) {
    std::cout << n << " ";
  }
  std::cout << "\n";
}
