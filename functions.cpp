#include "ngraph.hpp"
#include "set_ops.hpp"
#include <fstream>
using namespace NGraph;


/**********************************************************************
 * Prim's Algorithm - Find MST of a Graph
 * ********************************************************************
 * Input: a graph G and a weight matrix for G
 * output: A graph, MST
 * ********************************************************************/
Graph prims(Graph G, vector<vector<int>> weights) {
  Graph MST;
  MST.set_undirected();
  std::vector<bool> spanned(G.num_vertices(), false);
  spanned[0] = true;

  while (MST.num_vertices() < G.num_vertices()) {
    // Sequential search for the minimum-weight bridge edge
    bool first = true;
    Graph::edge b;
    std::vector<Graph::edge> edges = G.edge_list();
    for (int i = 0; i < edges.size(); i++) {
      // i is a bridge edge when one end is in S and the other is not
      if ((spanned[edges[i].first] != spanned[edges[i].second]) &&
          (first || weights[edges[i].first][edges[i].second] <
                        weights[b.first][b.second])) {
        first = false;
        b = edges[i];
      }
    }
    MST.insert_undirected_edge(b);
    std::cout << b.first << " --> " << b.second << "\n";
    // mark both ends spanned (one already was)
    spanned[b.first] = true;
    spanned[b.second] = true;
  }

  return MST;
}

/**********************************************************************
 * Print Graph
 * ********************************************************************
 * Input: a graph, G, a weight matrix for G, and a text output file name
 * output: Nothing - prints to console and text file
 * ********************************************************************/
void printGraph(Graph G, vector<vector<int>> weights, std::string fileName) {
  std::ofstream outFile(fileName);
  int totalWeight = 0;

  std::cout << "# vertices: " << G.num_vertices() << "\n";
  std::cout << "# edges:    " << G.num_edges() << "\n";

  outFile << "# vertices: " << G.num_vertices() << "\n";
  outFile << "# edges:    " << G.num_edges() << "\n";

  for (Graph::const_iterator p = G.begin(); p != G.end(); p++) {
    const Graph::vertex_set &out = G.out_neighbors(p);

    for (typename Graph::vertex_set::const_iterator q = out.begin();
         q != out.end(); q++) {
      std::cout << p->first << "  -->  " << *q << "\t"
                << "Weight: " << weights[p->first][*q] << "\n";
      outFile << p->first << "  -->  " << *q << "\t"
              << "Weight: " << weights[p->first][*q] << "\n";
      totalWeight += weights[p->first][*q];
    }
  }
  std::cout << "Total weight: " << totalWeight << "\n";
  std::cout << "Output written to text file in ./output/ \n";
  outFile << "Total weight: " << totalWeight << "\n";
}