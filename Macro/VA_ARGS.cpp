#include <iostream>

#define SPACENAME "nova"
#define TEST1 "conv"

#define COM_TWO_MACRO()  \
  SPACENAME TEST1        \


#define COM_STR(name1, name2)    \
  #name1#name2

#define COM_MACRO_AND_STR(name)   \
  SPACENAME#name

#define COM_ARGS(...) (__VA_ARGS__)

// cout args number
#define PP_NARG(...) \
    PP_NARG_(__VA_ARGS__,PP_RSEQ_N())
#define PP_NARG_(...) \
    PP_ARG_N(__VA_ARGS__)
#define PP_ARG_N( \
    _1, _2, _3, _4, _5, _6, _7, _8, _9,_10,N,...) N
#define PP_RSEQ_N() \
    10,9,8,7,6,5,4,3,2,1,0

#define NUMARGS(...)  (sizeof((int[]){__VA_ARGS__})/sizeof(int))

int main() {
  std::cout << COM_TWO_MACRO() << "\n";

  std::cout << COM_STR("name", "conv") << "\n";

  std::cout << COM_STR(name, conv) << "\n";

  std::cout << COM_MACRO_AND_STR(conv) << "\n";
  
  std::string name = "conv";
  std::cout << COM_MACRO_AND_STR(name) << "\n";

  std::cout << COM_ARGS("name", "conv", "relu") << "\n";

  std::cout << PP_NARG("name", "conv", "relu") << "\n";
  
  std::cout << NUMARGS(1,2,3) << "\n";

}
