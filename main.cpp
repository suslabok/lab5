 #include <iostream>
#include "graph.h"
using namespace std;

int main() {
    Graph g(true);  // Create a directed graph

    // Add vertices
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addVertex();

 
    // Display graph properties
    std::cout << "Graph is empty: " << g.isEmpty() << std::endl;
    std::cout << "Graph is directed: " << g.isDirected() << std::endl;
    std::cout << "Number of vertices: " << g.numVertices() << std::endl;
    std::cout << "Number of edges: " << g.numEdges() << std::endl;

    // Display degree information
    std::cout << "Indegree of vertex 1: " << g.indegree(1) << std::endl;
    std::cout << "Outdegree of vertex 1: " << g.outdegree(1) << std::endl;
    std::cout << "Degree of vertex 1: " << g.degree(1) << std::endl;

    // Remove edge
    g.removeEdge(1, 2);
     
    g.removeVertex(2);
    std::cout << "Number of vertices after removing vertex 2: " << g.numVertices() << std::endl;

    return 0;
}    
   
   

