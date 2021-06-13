#include "ngraph.hpp"
#include "set_ops.hpp"
using namespace NGraph;

int main() {
  Graph B;
  B.set_undirected();
  B.insert_undirected_edge(0, 1);
  B.insert_undirected_edge(1, 2);
  B.insert_undirected_edge(0, 3);
  B.insert_undirected_edge(1, 4);
  B.insert_undirected_edge(2, 5);
  B.insert_undirected_edge(3, 4);
  B.insert_undirected_edge(4, 5);
  B.insert_undirected_edge(3, 6);
  B.insert_undirected_edge(4, 7);
  B.insert_undirected_edge(5, 8);
  B.insert_undirected_edge(6, 7);
  B.insert_undirected_edge(7, 8);

  int weights[9][9] = {
      {0, 2, 0, 3, 0, 0, 0, 0, 0}, {2, 0, 2, 0, 7, 0, 0, 0, 0},
      {0, 2, 0, 0, 0, 2, 0, 0, 0}, {3, 0, 0, 0, 7, 0, 6, 0, 0},
      {0, 7, 0, 7, 0, 4, 0, 4, 0}, {0, 0, 2, 0, 4, 0, 0, 0, 2},
      {0, 0, 0, 6, 0, 0, 0, 4, 0}, {0, 0, 0, 0, 4, 0, 4, 0, 6},
      {0, 0, 0, 0, 0, 2, 0, 6, 0},
  };

  std::cerr << "# vertices: " << B.num_vertices() << "\n";
  std::cerr << "# edges:    " << B.num_edges() << "\n";

  for (Graph::const_iterator p = B.begin(); p != B.end(); p++) {
    const Graph::vertex_set &out = B.out_neighbors(p);

    for (typename Graph::vertex_set::const_iterator q = out.begin();
         q != out.end(); q++) {
      std::cerr << p->first << "  -->  " << *q << "\t" << "Weight: " << weights[p->first][*q] << "\n";
    }
  }

  // for (Graph::const_iterator p = B.begin(); p != B.end(); p++) {
  //   Graph::vertex_set Si = B.in_neighbors(p);
  //   // print out each out-going edge
  //   for (Graph::vertex_set::const_iterator t = Si.begin(); t != Si.end();
  //   t++) {
  //     std::cout << *t << "\n";
  //   }
  //   std::cout << "\n";
  // }

  return 0;
}