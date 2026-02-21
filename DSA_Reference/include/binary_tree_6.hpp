// binary_tree_6.hpp
#pragma once
#include <queue>
#include <iostream>


class bt_node
{
public:
    int value{0};
    bt_node* left{nullptr};
    bt_node* right{nullptr};

    bt_node(int val, bt_node* lft, bt_node* rgt);
};


class bt_tree
{
public:
    bt_node* root{nullptr};
    bt_tree() = default;

    bt_tree(const bt_tree&) = delete;                         // Copy Constructor  (Removing cause we're dealing with raw pointers and heap data)
    bt_tree& operator=(const bt_tree&) = delete;              //(Copy) assignment Operator
    bt_tree(bt_tree&&) = delete;                              // Move constructor; bt_tree b = std::move(a)   // would call move constructor
    bt_tree& operator=(bt_tree&&) = delete;                   // Move assignment operrator; b = std::move(a);
    
    ~bt_tree();
    void insert_node_level(int value);
    void level_order_traversal();

private:
    void destructor_recursive(bt_node*);

};