#include <iostream>
#include "arrays_strings_1.hpp"
#include "linked_lists_2.hpp"
#include "hashing_3.hpp"
#include "stacks_queues_4.hpp"
#include "binary_search_5.hpp"
#include "binary_tree_6.hpp"
#include "bst_7.hpp"
#include "graphs_8.hpp"
#include "lists_9.hpp"
#include "heap_10.hpp"
#include "two_pointers_11.hpp"
#include "sliding_window_12.hpp"

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

    // GRAPHS: ADJACENCY MATRIX
    // Graph_matrix G_adj_mat(4, false);
    // G_adj_mat.insert_edge(0,1);
    // G_adj_mat.insert_edge(0,2);
    // G_adj_mat.insert_edge(1,3);
    // G_adj_mat.print_graph();

    // GRAPHS: ADJACENCY LISTS
    // Graph_list G_adj_list(9, false);
    // G_adj_list.insert_edge(0,1);
    // G_adj_list.insert_edge(0,2);
    // G_adj_list.insert_edge(1,3);
    // G_adj_list.insert_edge(2,4);
    // G_adj_list.insert_edge(2,5);
    // G_adj_list.insert_edge(2,6);
    // G_adj_list.insert_edge(3,7);
    // G_adj_list.insert_edge(5,8);

    // G_adj_list.print_graph();
    // // G_adj_list.bfs();
    // G_adj_list.dfs();

    // STD::LIST (DOUBLY LINKED LIST)
    // cpp_lists();

    // // HEAPS
    // priority_queue_reference();

    // Pattern: 2 POINTERS
    // two_pointers_reference();

    // Pattern: SLIDING WINDOW
    sliding_window_reference();
}