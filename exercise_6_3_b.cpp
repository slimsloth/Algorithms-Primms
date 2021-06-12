#include "ngraph.hpp"
#include "set_ops.hpp"
using namespace NGraph;

int main() {
  Graph B;
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

  std::cout << "Graph has " << B.num_vertices() << " vertices and "
            << B.num_edges() << " edges.\n";

  for (Graph::const_iterator p = B.begin(); p != B.end(); p++) {
    Graph::vertex_set Si = B.in_neighbors(p);
    // print out each out-going edge
    for (Graph::vertex_set::const_iterator t = Si.begin(); t != Si.end(); t++) {
      cout << *t << "\n";
    }
    cout << "\n";
  }

  return 0;
}