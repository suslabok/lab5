#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class Graph {
private:
    std::vector<std::vector<int>> adjMatrix;
    int vertexCount;
    bool directed;

public:
    Graph(bool isDirected = false);
    bool isEmpty() const;
    bool isDirected() const;
    void addVertex();
    void addEdge(int vertex1, int vertex2);
    void removeVertex(int vertex);
    void removeEdge(int vertex1, int vertex2);
    int numVertices() const;
 
};

#endif
