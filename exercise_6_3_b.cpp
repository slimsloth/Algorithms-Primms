#include "ngraph.hpp"
#include "set_ops.hpp"
#include  "functions.cpp"
using namespace NGraph;

int main() {
  Graph G;
  G.set_undirected();
  G.insert_undirected_edge(0, 1);
  G.insert_undirected_edge(1, 2);
  G.insert_undirected_edge(0, 3);
  G.insert_undirected_edge(1, 4);
  G.insert_undirected_edge(2, 5);
  G.insert_undirected_edge(3, 4);
  G.insert_undirected_edge(4, 5);
  G.insert_undirected_edge(3, 6);
  G.insert_undirected_edge(4, 7);
  G.insert_undirected_edge(5, 8);
  G.insert_undirected_edge(6, 7);
  G.insert_undirected_edge(7, 8);

  vector<vector<int>> weights = {
      {0, 2, 0, 3, 0, 0, 0, 0, 0}, {2, 0, 2, 0, 7, 0, 0, 0, 0},
      {0, 2, 0, 0, 0, 2, 0, 0, 0}, {3, 0, 0, 0, 7, 0, 6, 0, 0},
      {0, 7, 0, 7, 0, 4, 0, 4, 0}, {0, 0, 2, 0, 4, 0, 0, 0, 2},
      {0, 0, 0, 6, 0, 0, 0, 4, 0}, {0, 0, 0, 0, 4, 0, 4, 0, 6},
      {0, 0, 0, 0, 0, 2, 0, 6, 0},
  };

  printGraph(G, weights, "./output/exercise_6-3b.txt");

  return 0;
}