#include "ngraph.hpp"
#include "set_ops.hpp"
#include <fstream>
using namespace NGraph;

Graph prims(Graph G, vector<vector<int>> weights) {
  Graph MST;
  std::vector<bool> spanned(G.num_vertices(), false);
  spanned[0] = true;
  while (MST.num_vertices() < G.num_vertices() - 1) {
    // sequential search for the minimum-weight bridge edge
  }

  return MST;
}

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
  outFile << "Total weight: " << totalWeight << "\n";
}