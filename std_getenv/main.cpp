#include <iostream>
#include <cstdlib>
 
int main()
{
    if(const char* env_p = std::getenv("TEST_GETENV"))
        std::cout << "Your PATH is: " << env_p << '\n';
}

// export TEST_GETENV=/usr/name/cpp_tutorial/
// out is: /usr/name/cpp_tutorial/
