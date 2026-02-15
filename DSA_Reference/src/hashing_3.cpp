#include "hashing_3.hpp"

// Set → "Have I seen this?"
// Map → "Where / how many times have I seen this?"

void hash_sets_maps()
{
    std::cout << "HASH SETS \n";
    std::unordered_set<int> a{};             // Unordered unlike <set>
    a.insert(1);                             // O(1) (insert at head, i believe (when thinking of separate chaining))
    a.insert(10);
    a.insert(10);

    for (int x: a){
        std::cout << x << ", ";             // 10, 1 (but this will be random, depends on hash result, not insertion order)
    }
    std::cout << '\n';
    
    if (a.count(1))                         // Lookup amortized O(1),  a[1] does not apply to sets
    {                                       
        std::cout << "1 is present \n";
    }

    a.erase(1);                            // Deletion amortized O(1)

    if (a.find(1) == a.end())                     // Another method for lookup
    {
        std::cout << "1 is no longer present \n";
    }

    std::cout << "HASH MAPS \n";
    std::unordered_map<int, std::string> dict{};

    dict[0] = "A";
    dict.insert({1, "B"});
    dict.insert({0, "A"});   // IGNORED (key already exists)
    dict.insert({0, "C"});   // IGNORED (key already exists)

    for (auto x: dict)
    {
        std::cout << x.first << ", " << x.second << ", ";   // Prints 1, B, 0, A,  but the order is random 
    }
    std::cout << '\n';

    if (dict.count(1)) std::cout << "1 is present \n";    // if(a[1]) is wrong, will create the key if it doesn't exist 
    dict.erase(1);
    std::cout << "After dict.erase(1) \n";
    for (auto& [key, value] : dict) std::cout << key << ", " << value << ", ";       
    std::cout << '\n'; 
}