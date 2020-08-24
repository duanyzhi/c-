#include <iostream>
#include <fstream>

int main () {
  std::ofstream file;  // open file, if none create it.
  file.open ("doc");
  file << "I am a test demo.\n";  // write to doc
  file << "Hello World.\n";  // write to doc
  file.close();


  std::ifstream f("doc");
  std::string line;
  if (f.is_open())  // check file is open succeed
  {
    while ( getline (f, line) )   // getline
    {
      std::cout << line << '\n';
    }
    f.close();
  }
  return 0;
}
