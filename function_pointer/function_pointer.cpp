#include <string>
#include <iostream>

int print(int a);

typedef int (FUN)(int);
typedef int (*PFUN)(int);
int (*pprint) (int a);

int main() { 
  FUN *myfun = print;
  PFUN mypfun = print;
  pprint = print;
  myfun(1);
  (*mypfun)(2);
  mypfun(2);
  pprint(3);
}

int print(int a) {
  std::cout << a << "\n";
}


