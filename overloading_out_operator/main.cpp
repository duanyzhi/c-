#include <iostream>
using namespace std;

class Date
{
    int mo, da, yr;
public:
    Date(int m, int d, int y)
    {
        mo = m; da = d; yr = y;
    }
    friend ostream& operator<<(ostream& os, const Date& dt);
};

// 重载操作，这里重写了std::cout << 输出的操作 
ostream& operator<<(ostream& os, const Date& dt)
{
    // 输入os是一个std::cout对象,和一个Date对象。因为都有引用
    os << "data:" << dt.mo << '/' << dt.da << '/' << dt.yr << "\n";
    return os;  // 重写了os操作 所以返回也必须是os
}

int main()
{
    Date dt(5, 6, 92);
    cout << dt;
}
