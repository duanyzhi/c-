#include <iostream>

void print(const char *cp) {
  if (cp)
    while (*cp)
      std::cout << *cp++ ;
    std::cout << "" << std::endl;
}
