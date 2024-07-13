#include "../include/graph.h"

Graph::Graph(bool isDirected) : directed(isDirected), vertexCount(0) {}

bool Graph::isEmpty() const {
    return vertexCount == 0;
}

bool Graph::isDirected() const {
    return directed;
}

void Graph::addVertex() {
    vertexCount++;
    for (auto &row : adjMatrix) {
        row.push_back(0);
    }
    adjMatrix.push_back(std::vector<int>(vertexCount, 0));
}

void Graph::addEdge(int vertex1, int vertex2) {
    if (vertex1 >= vertexCount || vertex2 >= vertexCount) return;
    adjMatrix[vertex1][vertex2] = 1;
    if (!directed) {
        adjMatrix[vertex2][vertex1] = 1;
    }
}

void Graph::removeVertex(int vertex) {
    if (vertex >= vertexCount) return;

    adjMatrix.erase(adjMatrix.begin() + vertex);
    for (auto &row : adjMatrix) {
        row.erase(row.begin() + vertex);
    }
    vertexCount--;
}

void Graph::removeEdge(int vertex1, int vertex2) {
    if (vertex1 >= vertexCount || vertex2 >= vertexCount) return;

    adjMatrix[vertex1][vertex2] = 0;
    if (!directed) {
        adjMatrix[vertex2][vertex1] = 0;
    }
}

int Graph::numVertices() const {
    return vertexCount;
}
