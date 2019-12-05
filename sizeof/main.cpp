#include <iostream>
using std::cout;
using std::endl;

int main() {
  cout << "char size:" << sizeof(char) << '\t';
  cout << "int size:" << sizeof(int) << '\t';
  cout << "float size:" << sizeof(float) << '\t';
  cout << " '' size:" << sizeof("") << '\t'; // "":1 byte
  cout << '\n';

  int ival2 = 42;
  int *p1 = &ival2; 
  cout << "p1: " << p1 << " \t *p1: " << *p1 << "\n";
  // p1 is address(0x7ffee25609e)4, take 8 byte
  cout << "p1 size:" << sizeof(p1) << '\t' << "*p1 size:" << sizeof(*p1) << '\n';

  char a[] = "hello world"; 
  char *p = a;
  cout<< "a size:" << sizeof(a) << endl; // 12 byte
  cout << "p:" << p << '\t' << "*p:" << *p << '\n'; // why here?
  cout<< "p size:" << sizeof(p) << endl; // 4 byte
  /***
   * char size:1	int size:4	float size:4	 '' size:1
     p1: 0x7ffee25609e4 	 *p1: 42
     p1 size:8	*p1 size:4
     a size:12
     p:hello world	*p:h
     p size:8
   * **/
}
