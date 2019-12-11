#include <iostream>     /* std::cout */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>       /* vector */
int main ()
{
  int size[] = {10, 4}; //size[] is int list, 10 row 4 col
  int count = size[0] * size[1];
  std::cout << count << "\n";
  // get a memory to store data
  int* ptr = reinterpret_cast<int*>(malloc(count * sizeof(int)));

  std::vector<std::vector<int>> data; // data matrix
  for (int i=0; i < size[0]; i++) {
    std::vector<int> each_data(4, 0);
    each_data[0] = rand() % 10; // generate number between 0:10
    each_data[1] = rand() % 10; 
    each_data[2] = rand() % 10; 
    each_data[3] = rand() % 10; 
    data.push_back(each_data);
  }

  std::cout << "vector size:[" << data.size() << "," << data[0].size() << "]\n";

  // copy data to ptr
  int num = 0;
  for (int i = 0; i < size[0]; i++){
    for (int j = 0; j < size[1]; j++){
      printf("row %d, rol %d: %d \n", i, j, data[i][j]);
      ptr[num] = data[i][j]; // 每一个指针存放一个数字
      num++; //ptr +1
    }
  }
  std::cout << ptr << "\t" << *ptr << "\n";
  for (int i=0; i<10; i++) {
    std::cout << *(ptr+i) << "\t";  // output element n ptr
  }
  std::cout << "\n";
}
