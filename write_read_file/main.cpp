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

  std::ifstream doc("doc");
  doc.seekg(0, doc.end);
  std::cout << doc.tellg() << "\n";
  const int len = doc.tellg();
  doc.seekg(0, doc.beg);
  char* buffer = new char [len];
  doc.read(buffer, len);
  if (doc) std::cout << "read successfully.\n";
  else std::cout << "only " << doc.gcount() << "could be read.";
  doc.close();
  
  for (int i=0; i<len; i++) std::cout << buffer[i];
  std::cout << "\n";
  delete[] buffer;
  return 0;
}
