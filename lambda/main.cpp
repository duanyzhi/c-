#include <iostream>

// lambda 表达式:
// [ captures ] ( params ) { body }
// []表示使用一对方括号作为开始的标识，
// 类似于声明一个函数。params是输入，{body}里是函数实现，带有返回值.
// [ captures ]是指捕获，比如[x]即从lambda所在定义域内捕获定义x的值，并在lambda表达式内使用。
// [ captures ] 可以缺省，比如:
// [ ]  : 不从环境中捕获
// [ = ] : by value捕获，以值的形式传递给Lambda使用
// [ & ] : by reference捕获，以&形式使用。
// 可以加入输出类型:
// [ capture clause ] (parameters) -> return-type
// {
// definition of method
// }

class class_lambda {
  private:
    int x;
  public:
    class_lambda(int i = 0):x(i) {}
    bool ops(int y) { return x < y; } 
};

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


 // auto lambda_fun = [x](int y) {return x < y;};这句相当于下面函数:
 int x = 0;
 class_lambda lambda_thing(x);
 auto bool_ = lambda_thing.ops(1);
 std::cout << "results:" << bool_ << std::endl;
}





