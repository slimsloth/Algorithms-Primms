#include "functions.cpp"
#include "ngraph.hpp"
#include "set_ops.hpp"
using namespace NGraph;

/******************************************************************************
 * TEST DRIVER CODE FOR EXERCISE 6-3 (c)
 * CPSC 335 Project 2
 * Group Members: Sean Mitchell, Jason Mora-Mendoza
 * ***************************************************************************/
int main() {
  // Undirected graph from exercise 6-3 (c)
  Graph G;
  G.set_undirected();
  G.insert_undirected_edge(2, 0);
  G.insert_undirected_edge(2, 5);
  G.insert_undirected_edge(0, 5);
  G.insert_undirected_edge(0, 1);
  G.insert_undirected_edge(0, 3);
  G.insert_undirected_edge(5, 3);
  G.insert_undirected_edge(5, 6);
  G.insert_undirected_edge(3, 6);
  G.insert_undirected_edge(3, 1);
  G.insert_undirected_edge(1, 4);
  G.insert_undirected_edge(3, 4);
  G.insert_undirected_edge(6, 4);

  // Weight matrix
  vector<vector<int>> weights = {
      {0, 11, 2, 10, 0, 9, 0}, {11, 0, 0, 5, 3, 0, 0}, {2, 0, 0, 0, 0, 8, 0},
      {10, 5, 0, 0, 6, 13, 7}, {0, 3, 0, 6, 0, 0, 12}, {9, 0, 8, 13, 0, 0, 4},
      {0, 0, 0, 7, 12, 4, 0}};

  // Print the base graph and weights
  printGraph(G, weights, "./output/exercise_6-3c.txt");

  // Find the MST then print
  Graph MST = prims(G, weights);
  printGraph(MST, weights, "./output/MST_exercise_6-3c.txt");

  return 0;
}