#include <queue>

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

    void insert_node_level(int value);

};