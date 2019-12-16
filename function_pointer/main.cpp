#include <stdio.h> 
#include <iostream>
// A normal function with an int parameter 
// and void return type 
void fun(int a) 
{ 
    printf("Value of a is %d\n", a); 
} 
  
int main() 
{ 
    // fun_ptr is a pointer to function fun()  
    // (int) define fun input is a int type
    void (*fun_ptr)(int) = &fun; 
  
    /* The above line is equivalent of following two 
       void (*fun_ptr)(int); 
       fun_ptr = &fun;  
    */
  
    // Invoking fun() using fun_ptr 
    // fun_pointer must use void* to get a pointer out
    std::cout << fun_ptr << "\t" << (void*)fun_ptr << "\n";
    (*fun_ptr)(10); 
  
    return 0; 
} 
