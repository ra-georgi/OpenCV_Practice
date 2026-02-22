#include <iostream>
#include "arrays_strings_1.hpp"
#include "linked_lists_2.hpp"
#include "hashing_3.hpp"
#include "stacks_queues_4.hpp"
#include "binary_search_5.hpp"
#include "binary_tree_6.hpp"
#include "bst_7.hpp"
#include "graphs_8.hpp"

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
    // std::vector<int> a{-5,-2,0,2,4,4,5,9,};
    // int target = 2;
    // binary_search(target, a);

    // BINARY TREE
    // bt_tree tree_obj{};
    // tree_obj.insert_node_level(1);
    // tree_obj.insert_node_level(3);
    // tree_obj.insert_node_level(4);
    // tree_obj.insert_node_level(2);
    // tree_obj.level_order_traversal();

    // BINARY SEARCH TREE
    // bst tree_obj{};
    // tree_obj.level_traversal();
    // tree_obj.insert_node(3);
    // tree_obj.insert_node(5);
    // tree_obj.insert_node(2);
    // tree_obj.insert_node(4);
    // tree_obj.insert_node(1);
    // tree_obj.level_traversal();

    // Graphs: Adjacency matrix
    // Graph_matrix G_adj_mat(4, false);
    // G_adj_mat.insert_edge(0,1);
    // G_adj_mat.insert_edge(0,2);
    // G_adj_mat.insert_edge(1,3);
    // G_adj_mat.print_graph();

    Graph_list G_adj_list(4, false);
    // G_adj_list.insert_edge(0,1);
    // G_adj_list.insert_edge(0,2);
    // G_adj_list.insert_edge(1,3);
    G_adj_list.print_graph();



}