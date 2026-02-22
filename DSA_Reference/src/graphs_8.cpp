// graphs.cpp
#include "graphs_8.hpp"

Graph_matrix::Graph_matrix(int num_nodes, bool direction): nodes_count(num_nodes), directed(direction)
{
    adj_mat = std::vector<std::vector<int>>(num_nodes,std::vector<int>(num_nodes,0));
}

void Graph_matrix::insert_edge(int node1, int node2)
{
    if ( node1<0 || node1>=nodes_count || node2<0 || node2>=nodes_count )
    {
        std::cout << "Invalid nodes \n";
        return;
    }

    adj_mat[node1][node2] = 1;
    if (not directed) adj_mat[node2][node1] = 1;
}

void Graph_matrix::print_graph()
{
    for (auto i: adj_mat)
    {
        for (auto j: i)
        {
            std::cout << j << ", ";
        }
        std::cout << "\n";
    }   
}




Graph_list::Graph_list(int num_nodes, bool direction): nodes_count(num_nodes), directed(direction){}

void Graph_list::insert_edge(int node1, int node2)
{
    adj_list[node1].push_back(node2);

    if (!directed) {
        adj_list[node2].push_back(node1);
    }
}

void Graph_list::print_graph()
{
    for (int i = 0; i < nodes_count; i++) {
        std::cout << i << ": ";
        for (int neighbor : adj_list[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << "\n";
    }
}