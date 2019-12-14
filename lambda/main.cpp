#include <iostream>

// lambda 表达式:
// [ captures ] ( params ) { body }
// []表示使用一对方括号作为开始的标识，
// 类似于声明一个函数。a, b是两个输入，{body}里是函数实现，带有返回值.
// 或者:
// [ capture clause ] (parameters) -> return-type
// {
// definition of method
// }
int main() {
 auto lambda_fun = [](int a, int b) {return a < b;};
 std::cout << lambda_fun(3, 2) << "\n"; // a < b return 1, else 0

 // ->int 表示返回值会转换为int整形数据
 auto lambda_fun2 = [](float a, float b)->int 
   { if (a < b) {
       return a;
     } else {
       return b;}
   };
 std::cout << lambda_fun2(3.1, 2.2) << "\n"; // a < b return 1, else 0

}
