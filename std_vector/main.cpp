#include <iostream>
#include <vector>
 
int main()
{
    // Create a vector containing integers
    std::vector<int> v = {7, 5, 16, 8};
 
    // Add two more integers to vector
    v.push_back(25);
    v.push_back(13);
 
    // Iterate and print values of vector
    for(int n : v) {
        std::cout << n << '\n';
    }

    // begin and size
    auto vb_ptr = v.begin();  // return is a pointer to begin element
    std::cout << "begin element:" << *vb_ptr << '\n';
    std::cout << "size:" << v.size() << '\n';
    std::cout << "empty:" << v.empty() << '\n';

    // insert
    v.insert(vb_ptr, 8);  // insert 8 in the begin pointer
    std::cout << "Insert Begin:" << *v.begin() << '\n';
    std::vector<int> new_vec = {1, 2, 3, 4};
    v.insert(v.begin(), new_vec.begin(), new_vec.begin()+2);
    for(int n : v) {
        std::cout << n << "\n";
    }

    // pop_back
    std::cout << "begin_pop_back:" << *(v.end()-1) << '\n';
    v.pop_back(); // Removes the last element of the container.
    std::cout << "after_pop_back:" << *(v.end()-1) << '\n';

    std::cout << "get 0 element use .at():" << v.at(0) << "\n";
    v.clear();
    std::cout << "clear size:" << v.size() << '\n';
}
