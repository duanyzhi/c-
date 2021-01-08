#include <string>
#include <iostream>

typedef std::string (*PFUN)(std::string);

std::string print(std::string name) {
  std::cout << name << "\n";
}

int run(PFUN fn) {
  std::string name = "my_fun";
  fn(name);
  return 1;
}

int main() { 
  run(print);
}
