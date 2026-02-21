// bst_7.hpp
#pragma once
#include <iostream>
#include <queue>

class bst_node
{
public:
    int value{-1};
    bst_node* left{nullptr};
    bst_node* right{nullptr};

    bst_node(int val, bst_node* lft = nullptr, bst_node* rgt = nullptr);
};

class bst
{
public:
    bst_node* root{nullptr};

    bst() = default;
    bst(const bst&) = delete;
    bst(bst&&) = delete;
    bst& operator=(const bst&) = delete;
    bst& operator=(bst&&) = delete;

    void insert_node(int val);
    ~bst();
    void level_traversal();
private:
    void insert_recursive(bst_node*&, int);
    void delete_recursive(bst_node*);

};