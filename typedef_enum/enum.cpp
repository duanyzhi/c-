#include <iostream>
 
// enum that takes 16 bits
enum smallenum: int16_t // c++11 class 派生类:基类
{
    a,
    b,
    c
};
 
 
// color may be red (value 0), yellow (value 1), green (value 20), or blue (value 21)
// 创建新的数据类型color
enum color
{
    red,
    yellow,
    green = 20,
    blue
};
 
// altitude may be altitude::high or altitude::low
enum class altitude: char
{ 
     high='h',
     low='l', // C++11 allows the extra comma
}; 
 
// the constant d is 0, the constant e is 1, the constant f is 3
enum
{
    d,
    e,
    f = e + 2
};
 
//enumeration types (both scoped and unscoped) can have overloaded operators
std::ostream& operator<<(std::ostream& os, color c)
{
    switch(c)
    {
        case red   : os << "red";    break;
        case yellow: os << "yellow"; break;
        case green : os << "green";  break;
        case blue  : os << "blue";   break;
        default    : os.setstate(std::ios_base::failbit);
    }
    return os;
}
 
std::ostream& operator<<(std::ostream& os, altitude al)
{
    return os << static_cast<char>(al); //强行将al转换为char类型
}
 
int main()
{
    color col = red;  //新建color数据类型col，值为red
    altitude a;
    a = altitude::low;
 
    std::cout << "col = " << col << '\n'
              << "a = "   << a   << '\n'
              << "f = "   << f   << '\n';
}
