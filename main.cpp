#include "header.h"

int main() {
  std::cout << "***************************************************************"
               "***************\n"
            << "* TEST DRIVER CODE FOR EXERCISE 6-3 (b)\n"
            << "* CPSC 335 Project 2\n"
            << "* Group Members: Sean Mitchell, Jason Mora-Mendoza\n"
            << "* "
               "***************************************************************"
               "************\n\n";

  // Undirected graph from exercise 6-3 (b)
  Graph graphB;
  graphB.set_undirected();
  graphB.insert_undirected_edge(0, 1);
  graphB.insert_undirected_edge(1, 2);
  graphB.insert_undirected_edge(0, 3);
  graphB.insert_undirected_edge(1, 4);
  graphB.insert_undirected_edge(2, 5);
  graphB.insert_undirected_edge(3, 4);
  graphB.insert_undirected_edge(4, 5);
  graphB.insert_undirected_edge(3, 6);
  graphB.insert_undirected_edge(4, 7);
  graphB.insert_undirected_edge(5, 8);
  graphB.insert_undirected_edge(6, 7);
  graphB.insert_undirected_edge(7, 8);

  // Weight matrix
  vector<vector<int>> weightsB = {
      {0, 2, 0, 3, 0, 0, 0, 0, 0}, {2, 0, 2, 0, 7, 0, 0, 0, 0},
      {0, 2, 0, 0, 0, 2, 0, 0, 0}, {3, 0, 0, 0, 7, 0, 6, 0, 0},
      {0, 7, 0, 7, 0, 4, 0, 4, 0}, {0, 0, 2, 0, 4, 0, 0, 0, 2},
      {0, 0, 0, 6, 0, 0, 0, 4, 0}, {0, 0, 0, 0, 4, 0, 4, 0, 6},
      {0, 0, 0, 0, 0, 2, 0, 6, 0},
  };

  // Print the base graph and weights
  std::cout << "***************************************************************"
               "***************\n"
            << "* BASE GRAPH\n"
            << "* "
               "***************************************************************"
               "************\n";
  printGraph(graphB, weightsB, "./output/exercise_6-3b.txt");

  // Find the MST then print
  std::cout << "***************************************************************"
               "***************\n"
            << "* MST\n"
            << "* "
               "***************************************************************"
               "************\n";
  Graph MST_B = prims(graphB, weightsB);
  printGraph(MST_B, weightsB, "./output/MST_exercise_6-3b.txt");

  std::cout << "***************************************************************"
               "***************\n"
            << "* TEST DRIVER CODE FOR EXERCISE 6-3 (c)\n"
            << "* CPSC 335 Project 2\n"
            << "* Group Members: Sean Mitchell, Jason Mora-Mendoza\n"
            << "* "
               "***************************************************************"
               "************\n\n";
  // Undirected graph from exercise 6-3 (c)
  Graph graphC;
  graphC.set_undirected();
  graphC.insert_undirected_edge(2, 0);
  graphC.insert_undirected_edge(2, 5);
  graphC.insert_undirected_edge(0, 5);
  graphC.insert_undirected_edge(0, 1);
  graphC.insert_undirected_edge(0, 3);
  graphC.insert_undirected_edge(5, 3);
  graphC.insert_undirected_edge(5, 6);
  graphC.insert_undirected_edge(3, 6);
  graphC.insert_undirected_edge(3, 1);
  graphC.insert_undirected_edge(1, 4);
  graphC.insert_undirected_edge(3, 4);
  graphC.insert_undirected_edge(6, 4);

  // Weight matrix
  vector<vector<int>> weightsC = {
      {0, 11, 2, 10, 0, 9, 0}, {11, 0, 0, 5, 3, 0, 0}, {2, 0, 0, 0, 0, 8, 0},
      {10, 5, 0, 0, 6, 13, 7}, {0, 3, 0, 6, 0, 0, 12}, {9, 0, 8, 13, 0, 0, 4},
      {0, 0, 0, 7, 12, 4, 0}};

  // Print the base graph and weights
    std::cout << "***************************************************************"
               "***************\n"
            << "* BASE GRAPH\n"
            << "* "
               "***************************************************************"
               "************\n";
  printGraph(graphC, weightsC, "./output/exercise_6-3c.txt");

  // Find the MST then print
    std::cout << "***************************************************************"
               "***************\n"
            << "* MST\n"
            << "* "
               "***************************************************************"
               "************\n";
  Graph MST_C = prims(graphC, weightsC);
  printGraph(MST_C, weightsC, "./output/MST_exercise_6-3c.txt");

  return 0;
}