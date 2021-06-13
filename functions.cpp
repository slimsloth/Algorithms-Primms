#include "ngraph.hpp"
#include "set_ops.hpp"
using namespace NGraph;

Graph prims(Graph G, vector<vector<int>> weights) {
    Graph MST;
    std::vector<bool> spanned(G.num_vertices(), false);
    spanned[0] = true;
    while(MST.num_vertices() < G.num_vertices() - 1) {
        // sequential search for the minimum-weight bridge edge


    }

    return MST;
}

void printGraph(Graph G, vector<vector<int>> weights) {

}