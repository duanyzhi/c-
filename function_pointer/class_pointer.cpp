#include <string>
#include <iostream>

class fun{
 public:
   fun() {};
   ~fun() {};

   int print(int a) {
    std::cout << a << "\n";
   }
};

int run(fun& fn) {
 fn.print(1);
}

int main() {
  fun myfun;
  run(myfun);
}
