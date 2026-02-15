#include "arrays_strings_1.hpp"

#include <iostream>
#include <array>
#include <vector>
#include <string>

void arrays_strings()
{
    std::array<int,4> a{11,12,13,14};          // Static Array
    std::cout << a[0] << '\n'; 

    // std::array doesn't have these
    // a.insert(a.begin(),100);
    // a.erase(a.begin(),100);

    std::vector<int> b{1,2,3,4};               // Dynamic Array
    b.insert(b.begin()+1,99);                  // Insert & Deletion at between is O(n)
    b.push_back(100);                          // Amortized O(1)

    for (int x: b)
    {
        std::cout << x << ", ";
    }
    std::cout << '\n';

    const char* chr_ptr{"Const char pointer"};
    char chr_array[] {"C style character array"};  // Can decay to a pointer to character 
    std::string str{"std:string"};                 // Mutable

    std::cout << chr_ptr << " "<< chr_array << " "<< str << '\n';
    std::cout << "Vector size: " << b.size() << ", String size : " << str.size() << '\n';

    if (str.find("a") == std::string::npos)
    {
        std::cout << "Character is not present \n";
    }
    else
    {
         std::cout << "Character is present \n";
    }
}