\#include <**.h>, 即预处理头文件, 这一步会在所有的程序执行之前先执行.

include的原理就是把.h中的内容都拷贝过来.所以这里#include "EndBrance.h"就相当于一个} 



查看预处理之后的文件形式:

```shell
gcc -E main.cpp
```

这一步会生成预处理之后的文件:

```c++
# 1 "main.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "main.cpp"
# 1 "/usr/include/c++/7/iostream" 1 3
# 36 "/usr/include/c++/7/iostream" 3
       
# 37 "/usr/include/c++/7/iostream" 3

# 1 "/usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h" 1 3
# 229 "/usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h" 3

# 229 "/usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h" 3
.....


  static ios_base::Init __ioinit;


}
# 2 "main.cpp" 2


# 3 "main.cpp"
int main() {
  std::cout << "main" << "\n";
# 1 "EndBrance.h" 1
}
# 5 "main.cpp" 2
```

这个文件很长,主要是\#include <iostream>这个头文件带来的,里面有很多的定义.

可以看到最后

```c++
# 1 "EndBrance.h" 1
}
# 5 "main.cpp" 2
```

头文件EndBrance.h被扩展为了一个}符号.



**所以函数的实现不要放在头文件中,除了模板**