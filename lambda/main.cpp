#include <iostream>

// lambda 表达式，[]表示使用一对方括号作为开始的标识，
// 类似于声明一个函数。a, b是两个输入，{}里是函数实现，带有返回值.
int main() {
 auto lambda_fun = [](int a, int b) {return a < b;};
 std::cout << lambda_fun(3, 2) << "\n"; // a < b return 1, else 0
}
