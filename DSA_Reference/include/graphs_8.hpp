// graphs.hpp
#include <iostream>
#include <vector>
#include <unordered_map>

class Graph_matrix
{
public:
    std::vector<std::vector<int>> adj_mat; 
    int nodes_count{0};
    bool directed{false};

    Graph_matrix(int num_nodes, bool direction);
    void insert_edge(int node1, int node2);
    void print_graph();
};


class Graph_list
{
public:
    std::unordered_map<int,std::vector<int>> adj_list; 
    int nodes_count{0};
    bool directed{false};

    Graph_list(int num_nodes, bool direction);
    void insert_edge(int node1, int node2);
    void print_graph();
};


