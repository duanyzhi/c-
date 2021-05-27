#include <iostream>
#include <vector>
#include <initializer_list>

int main() {
  auto list = std::initializer_list<int>({1, 2, 3});
  std::cout << list.size() << std::endl;
  std::cout << "begin pointer:" << list.begin() << std::endl;
  std::cout << "end pointer:" << list.end() << std::endl;

  std::vector<int> int_vec;
  int_vec.insert(int_vec.end(), list.begin(), list.end());

  for (int i = 0; i < int_vec.size(); i++)
    std::cout << "num: " << i << " " << int_vec[i] << std::endl;
}
