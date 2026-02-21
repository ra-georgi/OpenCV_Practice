// bst_7.cpp
#include "bst_7.hpp"

bst_node::bst_node(int val, bst_node* lft, bst_node* rgt): value(val), left(lft), right(rgt){}

void bst::insert_node(int val)
{   
    // bst_node* inserted_node = new bst_node(val);
    if (root==nullptr)
    {
        root = new bst_node(val);
        return;
    } 
    insert_recursive(root,val);
}

void bst::insert_recursive(bst_node*& current_node, int val)
{
    if (current_node==nullptr)
    {
        current_node = new bst_node(val);
        return;
    }

    if (val < current_node->value)
    {
        insert_recursive(current_node->left, val);
        return;
    }
    else
    {
        insert_recursive(current_node->right, val);
        return;
    } 
}

bst::~bst()
{
    if (root!=nullptr) delete_recursive(root);
}

void bst::delete_recursive(bst_node* current_node)
{
    if (current_node->left!=nullptr) delete_recursive(current_node->left);
    if (current_node->right!=nullptr) delete_recursive(current_node->right);   
    delete current_node;   
}

void bst::level_traversal()
{
    if (root==nullptr) 
    {
        std::cout << "No nodes added! \n";
        return;
    }

    std::queue<bst_node*> q{};
    q.push(root);
    bst_node* current{};

    while (q.empty()==false)
    {
        current = q.front();
        std::cout << current->value << ", ";
        q.pop();
        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr)q.push(current->right);
    }
    std::cout << "\n ";
}