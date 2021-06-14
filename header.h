#include <fstream>
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
Graph prims(Graph G, vector<vector<int>> weights);

/**********************************************************************
 * Print Graph
 * ********************************************************************
 * Input: a graph, G, a weight matrix for G, and a text output file name
 * output: Nothing - prints to console and text file
 * ********************************************************************/
void printGraph(Graph G, vector<vector<int>> weights, std::string fileName);