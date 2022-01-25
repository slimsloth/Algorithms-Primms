# Algorithms-Primms

### Group Members: Sean Mitchell, Jason Mora-Mendoza

### How to run on Ubuntu:
~$ make

~$ make run
### Summary
This program implements Exercises 6-3 (b) and 6-3 (c) in C++, using the ngraph library.

### Project Requirements
#### 1. Executing the Prim-Jarnik algorithm by hand
- [x] Complete Exercises 6-3 (b) and 6-3 (c) from Algorithm Design in Three Acts.
#### 2. Reproducing the example graphs in C++
- [x] Implement Exercises 6-3 (b) and 6-3 (c) Set the graph to be undirected, and insert undirected edges.
- [x] Once the graph is constructed, traverse the data structure and print out each vertex, edge, and weight.
#### 3. Implementing the Prim-Jarnik algorithm
- [x] implement the Prim-Jarnik algorithm as a function on NGraph::Graph objects and weight matrices. Output each edge in the minimum spanning tree and its total weight.
## Relevant Files:
header.h - the main header file

main.cpp - the main test driver code for both exercises.

functions.cpp - prims() and printGraph() are implemented in this file

ngraph.hpp - for ngraph library

set_ops.hpp - for ngraph operations

/output/ - directory for storing output text files.
