**#include**

include <a.h>的话相当于把a.h中的全部文件都拷贝到当前文件中.

如果这个例子中不使用inline,还在log.h里实现了LOG函数就会出现multiple definition of `LOG(char const*)'的错误.

将main.cpp和log.cpp展开:

```c++
#include "log.h"

int main() {
 std::cout << "main" << std::endl;
}

// 相当于把头文件替换掉
#include <iostream>

void LOG(const char* message) {
  std::cout << message << std::endl;
}

int main() {
 std::cout << "main" << std::endl;
}

///////////////////////////////////////////////
// 同时log.cpp相当于
#include <iostream>

void LOG(const char* message) {
  std::cout << message << std::endl;
}

void InitLog() {
  LOG("Initlization");
}

// 这样就在两个.cpp中定义了相同的函数LOG,就会出错.所以说不要在头文件中实现函数,只定义就可以了.然后头文件用#ifdef保护起来.
```



**inline**

使用inline函数的地方相当于将函数的**实现部分**拷贝过去.

把log.h改成了inline的话就没有问题了.

```c++
// log.h
#include <iostream>

inline void LOG(const char* message) {
  std::cout << message << std::endl;
}
```



比如main.cpp

```c++
int main() {
  LOG("main");
}

// 相当于
int main() {
 std::cout << "main" << std::endl;
}
```

