#include<stdio.h>
#include<string.h>
 
// struct employee is a struct
// typedef ** emp using emp to define employee
typedef struct employee
{
    char name[50];
    int salary;
}emp;
 
int main( )
{
    emp e1;
    printf("\nEnter Employee record:\n");
    printf("\nEmployee name:\t");
    scanf("%s", e1.name); // scanf:input some from keyboard
    printf("\nEnter Employee salary: \t");
    scanf("%d", &e1.salary);
    printf("\nstudent name is %s", e1.name);
    printf("\nroll is %d", e1.salary);
}
