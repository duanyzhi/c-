#include <iostream>

int main() {
  double x = 10.3;
  int y1, y2;
  y1 = int (x);    // functional notation
  // forece convers float to int
  y2 = (int) x;    // c-like cast notation 
  std::cout << y1 << "," << y2 << "\n";
}
