#include <iostream>
#include "arrays_strings_1.hpp"
#include "linked_lists_2.hpp"
#include "hashing_3.hpp"
#include "stacks_queues_4.hpp"
#include "binary_search_5.hpp"

int main()
{
    // std::cout << "Hello World";
    // arrays_strings();

    // LINKED LISTS
    // SLL_Node B;
    // SLL_Node A(1,&B);
    // SLL_Node head(10, &A);
    // head.traverse_list();

    // HASH SET AND MAPS
    // hash_sets_maps();

    // STACKS AND QUEUES
    // stacks_queues();

    // BINARY SEARCH
    std::vector<int> a{-5,-2,0,2,4,4,5,9,};
    int target = 2;
    binary_search(target, a);

}