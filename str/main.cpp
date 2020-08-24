#include <string>
#include <iostream>
#include <algorithm>

int main()
{
  const std::string path="/root/config";
  auto const pos = path.find_last_of('/');
  const auto leaf = path.substr(pos+1);  // get sub str from path


  // TODO(dyz): add std::transform
  // std::transform(leaf.begin(), leaf.end(), leaf.begin(), ::toupper);
 
  std::cout << pos << " " <<  leaf << '\n';
}
