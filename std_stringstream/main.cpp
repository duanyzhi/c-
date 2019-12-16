// swapping ostringstream objects
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream

/***
 * clear() — to clear the stream
 * str() — to get and set string object whose content is present in stream.
 * operator << — add a string to the stringstream object.
 * operator >> — read something from the stringstream object,
***/

using namespace std;
int countWords(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words

    int count = 0;
    while (s >> word)
        count++;
    return count;
}

int main () {

  std::stringstream ss;

  ss << 100 << ' ' << 200;

  cout << "ss:" << ss << "\n";

  int foo,bar;
  ss >> foo >> bar;

  std::cout << "foo: " << foo << '\n';
  std::cout << "bar: " << bar << '\n';

  ////////////////
  string s = "geeks for geeks geeks "
              "contribution placements";
  std::cout << "Number of words are: " << countWords(s) << "\n"; 

  return 0;
}
