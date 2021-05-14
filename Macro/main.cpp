#include <iostream>
#include <vector>

#define MACRO_COMBIN(A, B) A##B
#define _TO_STR(x) #x

enum DTYPE {
  INT32,
  FLOAT
};

int main() {
  int n = MACRO_COMBIN(123,456);
  std::cout << n << "\n";  // ptype of n is int

  std::cout << _TO_STR(10) << std::endl;

#define CASE(DType, Type, SType)  \
  case(DType):             \
    std::cout << "this is " << SType << static_cast<Type>(data) << std::endl; \
    break;
  
#define _TYPE(_)   \
  _(DTYPE::INT32, int, "int")     \
  _(DTYPE::FLOAT, float, "float") 

  int data = 1;
  auto itype = DTYPE::INT32;
  switch(itype) {
    _TYPE(CASE)
    default:
      std::cout << "default here." << std::endl;
  }

#undef CASE
#undef _TYPE
  
}
