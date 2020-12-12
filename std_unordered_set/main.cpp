#include <iostream>
#include <unordered_set>

int main() {
  std::unordered_set<std::string> iset;
  
  iset.insert("first");
  iset.insert("second");

  for (auto s : iset) {
    std::cout << s << std::endl;
  }

  std::cout << iset.size() << std::endl;

  //  find returns end iterator if key is not found, 
  //  else it returns iterator to that key 
  std::cout << *iset.find("first") << std::endl;

  if (iset.find("nova") == iset.end()) {
    std::cout << "not found key" << std::endl;
  }
}
