#include "linked_lists_2.hpp"

SLL_Node::SLL_Node(int val, SLL_Node* nxt): value(val), next(nxt) {}

void SLL_Node::traverse_list()
{
    SLL_Node* nxt{this};
    while (nxt!=nullptr)
    {
        std::cout << nxt->value << ", ";
        nxt = nxt->next;
    }
    std::cout << "Done \n";
}