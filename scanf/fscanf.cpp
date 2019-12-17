#include<stdio.h> 
#include <iostream>
#include <vector>
int main() 
{ 
    FILE* ptr = fopen("abc.txt","r"); 
    if (ptr==NULL) 
    { 
        printf("no such file."); 
        return 0; 
    } 
  
    /* Assuming that abc.txt has content in below 
       format 
       NAME    AGE   CITY 
       abc     12    hyderbad 
       bef     25    delhi 
       cce     65    bangalore */
    std::vector<int> buf = {0, 0, 0}; 
    for (int i=0; i < 3; i++) {
        fscanf(ptr,"%d\n",&buf[i]);
        printf("%d\n",buf[i]);
    }

    std::cout << ptr << "\n";
  
    return 0; 
} 
