#include "binary_tree_6.hpp"

bt_node::bt_node(int val, bt_node* lft, bt_node* rgt): value(val), left(lft), right(rgt){}

void bt_tree::insert_node_level(int value)
{
    std::queue<bt_node*> q;
    q.push(this->root);

    bt_node node = bt_node(value, nullptr,nullptr);

    while (!q.empty())
    {
        if ( (q.front()->left) == nullptr)
        {
            q.front()->left = &node;
            return;
        }
        if ( (q.front()->right) == nullptr)
        {
            q.front()->right = &node;
            return;
        }
        q.push(q.front()->right);
        q.push(q.front()->left);

        q.pop();
    }
}


