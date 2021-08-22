#include <iostream>
#include <memory> // We need to include this for shared_ptr
 
int main()
{
  // Creating a shared_ptr through make_shared
  int element = 10;
  std::unique_ptr<float[]> ptr = std::make_unique<float[]>(element);

  // std::shared_ptr<float[]> ptr = std::make_shared<float[]>(element);
  // auto ptr = std::make_shared<float>(0.3f);

  float* value = (float*)ptr.get();  // cast float[] to float*
  for (int i = 0; i < element; i++) {
    *value = i;
    value++;
  } 

  float* value_ptr = (float*)ptr.get();  // cast float[] to float*
  for (int i = 0; i < element; i++) {
    std::cout << "value of " << i << " is: " << *(value_ptr++) << std::endl;
  }
  
}
