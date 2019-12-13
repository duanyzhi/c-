#include <iostream>
#include <tuple>
#include <string>
 
int main()
{
    std::tuple<int, std::string, float> p1, p2;
    p1 = std::make_tuple(10, "test", 3.14); // tuple赋值
    p2.swap(p1); // 将p1和p2内容交换
    std::cout << "("  << std::get<0>(p2)  // 获取tuple第一个元素值
              << ", " << std::get<1>(p2)
              << ", " << std::get<2>(p2) << ")\n";
    std::cout << std::get<0>(p1) << "\n";
}
