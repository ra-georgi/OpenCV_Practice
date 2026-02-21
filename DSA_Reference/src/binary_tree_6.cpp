// binary_tree_6.cpp
#include "binary_tree_6.hpp"

bt_node::bt_node(int val, bt_node* lft, bt_node* rgt): value(val), left(lft), right(rgt){}

void bt_tree::insert_node_level(int value)
{
    std::queue<bt_node*> q;
    bt_node* node = new bt_node(value, nullptr,nullptr);
    bt_node* current{};
    
    if (this->root!=nullptr)
    {
        q.push(this->root);
    }
    else
    {
        this->root = node;
        return;
    }

    while (q.empty()==false)
    {
        current = q.front();
        q.pop();
        if (current->left == nullptr)
        {
            current->left = node;
            return;
        }
        if (current->right == nullptr)
        {
            current->right = node;
            return;
        }  
        q.push(current->left);
        q.push(current->right);
    }


}


bt_tree::~bt_tree()
{
// Implementing with post order DFS makes sense cause we want to handle children before the parent itself
// (Although BFS would also work)
    if (this->root!=nullptr) destructor_recursive(this->root);
}

void bt_tree::destructor_recursive(bt_node* current)
{
    if (current->left!=nullptr) destructor_recursive(current->left);
    if (current->right!=nullptr) destructor_recursive(current->right);
    delete current;
}

void bt_tree::level_order_traversal()
{   
    std::queue<bt_node*> q{};
    if (root!=nullptr)
    {
        q.push(root);
    } else
    {
        std::cout << "No nodes! \n";
        return;
    }

    bt_node* current{};

    while (q.empty()==false)
    {
        current = q.front();
        q.pop();
        std::cout << current->value << ", ";
        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr) q.push(current->right);
    }
    std::cout << "\n";
}