#include <iostream>
#include <lib/print.h>

int main() {
 print("Please input two number:");
 int v1 = 0, v2 =0;
 std::cin >> v1 >> v2;

 std::cout << v1 + v2 << std::endl;
 print("Game Over.");
 return 0;
}
