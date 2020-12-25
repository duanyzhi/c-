#include <iostream>
#include <queue>

int main() {
  std::queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  
  std::cout << "front:" << q.front() << "\n";
  std::cout << "back:" << q.back() << "\n";
  
  q.pop(); 
  std::cout << "pop:" << q.front() << "\n";
}
