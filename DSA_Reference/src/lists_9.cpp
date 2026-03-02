#include "lists_9.hpp"

//  std::list is a doubly linked list container in C++. It stores elements as separate heap nodes connected by pointers.

// When Is std::list Good in DSA?: 
// Frequent Insertions/Deletions in Middle (If you already have an iterator)
// LRU Cache: std::list + std::unordered_map is the classic way to implement
// Splicing (Unique Feature): Moves nodes from one list to another in O(1)


// It is often slower despite "better Big-O". Prefer vector generally.


void cpp_lists()
{
    std::list<int> lst{1,2,3,4};     // Doubly Linked List

    lst.push_front(0);               // O(1)
    lst.push_back(5);                // O(1)

    // std::cout << lst[2];          //  Not allowed, No random access:

    // Insert in the middle (O(1) if iterator is known)
    // In this case, the overall operation is still O(n) because finding the position costs O(n).
    auto it = lst.begin();
    std::advance(it, 3);             // Move iterator to position (O(n))
    lst.insert(it, 99);              // O(1)

    // Erase element (O(1) if iterator is known)
    it = lst.begin();
    std::advance(it, 2);
    lst.erase(it);                   // O(1)

    for (int x : lst)
    {
        std::cout << x << ", ";
    }
    std::cout << '\n';

    std::cout << "List size: " << lst.size() << '\n';

    // Sorting (list has built-in sort)
    lst.sort();                      // O(n log n)
    std::cout << "After sort: ";
    for (int x : lst)
    {
        std::cout << x << ", ";
    }
    std::cout << '\n';

    // Remove specific value
    lst.remove(99);                  // O(n)
    
    // Splice example (unique to list)
    std::list<int> other{100, 200};

    auto pos = lst.begin();
    std::advance(pos, 1);

    lst.splice(pos, other);          // O(1) transfer nodes

    std::cout << "After splice: ";
    for (int x : lst)
    {
        std::cout << x << ", ";
    }
    std::cout << '\n';

    std::cout << "Other size (should be 0): " << other.size() << '\n';
}