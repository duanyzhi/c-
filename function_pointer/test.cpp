#include <iostream>

//struct MyFuncs
//{
int smallInt(int a) { return 1; }
unsigned long bigULong() { return 1000; }
//};

class OtherFuncs
{
  public:
    unsigned long aNumber() { return 555; }
};

template <typename FUNC>
long long getNum(FUNC getNumber)
{
    return (*getNumber)();
}

int main()
{
    //MyFuncs funcs;
    std::cout << "small: " << getNum(&smallInt) << std::endl;
    std::cout << "big: " << getNum(&bigULong) << std::endl;

    // OtherFuncs other;
    //std::cout << "other: " << getNum(other, &OtherFuncs::aNumber) << std::endl;

    return 0;
}
