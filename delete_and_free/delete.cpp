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

    return 0;
}
