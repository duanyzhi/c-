#include <iostream> 
using namespace std; 

// The Dot(.) operator is used to normally access members 
// of a structure or union. "." 可以是结构体直接访问成员
// The Arrow(->) operator exists to access the members of 
// the structure or the unions using pointers.
// ->运算符主要是指针对象来访问成员
struct Point { 
    int x, y; 
}; 
 
int main() 
{ 
    struct Point p1 = { 0, 1 }; 
  
    // p2 is a pointer to structure p1
    struct Point* p2 = &p1;

    // Accessing members of point p1 
    p1.x = 20; 
    cout << "x = " << p1.x << ", y = " << p1.y << "\n"; 
  
    // Accessing structure members using
    // structure pointer
    p2->x = 10;
    cout << p2->x << " " << p2->y << "\n";
    return 0; 
}
