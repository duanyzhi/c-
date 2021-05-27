#include <string>
#include <iostream>
#include <vector>
#include <sstream>

void split(const std::string& instr,
           std::vector<std::string>& split_str,
           const char split_symbol) {
  split_str.clear();
  std::istringstream isstr(instr);
  std::string temp;

  while (std::getline(isstr, temp, split_symbol)) {
    split_str.emplace_back(std::move(temp));
  }
}

int main() {
  std::string name = "/path/to/name.png 0";
  auto loc = name.find(" ");  // return location of first find " "
  std::cout << "loc:" << loc << std::endl;
  std::string sub1 = name.substr(loc);  // return from loc to name.size()
  std::string sub2 = name.substr(0, loc);  // return str from 0 to loc
  std::cout << sub1 << '\n';
  std::cout << sub2 << '\n';

  std::vector<std::string> name_vec;
  auto symbol = "/";
  split(sub2, name_vec, *symbol);

  for (auto n : name_vec) {
    std::cout << n << "\n";
  }
}
