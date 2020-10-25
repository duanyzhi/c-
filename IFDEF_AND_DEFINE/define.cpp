#include <iostream>


#define debug_mode "release"

#ifdef DEBUG
#warning DEBUG is defined
#define debug_mode "debug"
#endif


#define md_flag 0
#ifdef MD 1  // is not right
#define md_flag 1
#endif

int main() {
  std::cout << "debug mode:" << debug_mode << std::endl;
  std::cout << "md flag:" << md_flag << std::endl;
  return 0;
}
