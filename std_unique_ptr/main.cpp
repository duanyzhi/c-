#include <iostream>
#include <memory>
#include <string>

int main() {
  std::unique_ptr<std::string> ptrstr(new std::string("hello"));
  std::cout << "str:" << *ptrstr << "\n";

  std::unique_ptr<std::string> ptrstr2(ptrstr.release());
  // std::cout << "str:" << *ptrstr << "\n";  // segment fault
  std::cout << "str2:" << *ptrstr2 << "\n";
}
