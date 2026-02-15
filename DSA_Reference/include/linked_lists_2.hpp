#pragma once
#include <iostream>
class SLL_Node
{
    public:
        int value{-1};
        SLL_Node* next{nullptr};

        SLL_Node(int val = 0, SLL_Node* nxt = nullptr);

        void traverse_list();
};