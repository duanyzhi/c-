/***
Delete is an operator that is used to destroy array and non-array(pointer) objects which are created by new expression.

Delete can be used by either using Delete operator or Delete [ ] operator
New operator is used for dynamic memory allocation which puts variables on heap memory.
Which means Delete operator deallocates memory from heap.
Pointer to object is not destroyed, value or memory block pointed by pointer is destroyed.
delete 用来删除指针对象的
***/

// Program to illustrate deletion of array
#include <iostream>

using namespace std;

int main()
{
    // Allocate Heap memory
    int* array = new int[10]; // new申请一段新的int类型数据，长度为10，没有初始化的值
    int* ptr2 = new int(20); // 申请一个int数据，初始值值为20。

    cout << "array:" << array << "\t *array:"<< array[1] << "\n";
    cout << "Value of ptr2 = " << *ptr2 << "\n";

    // Deallocate Heap memory
    delete[] array; //加上[]表示删除array数组指针
    delete ptr2;

    cout << "ptr2:" << ptr2 << "\t *ptr2:" << *ptr2 << "\n";
    // free或delete只是把指针所指的内存给释放掉，但是指针的值
    // 还是这块内存的地址，只不过这块内存已经被回收了不能被该进程再使用
    // 需要将指针指向Null;比如如果不删除，由于ptr2指针指向还是有内容的，
    // 如果之后有其他指针的地址指向该指针地址，那么就会多出了一个值。
    ptr2 = NULL;  // 指向NULL就好了
    // cout << "after NULL:" << ptr2 << "\n"; // segment falut

    return 0;
}
