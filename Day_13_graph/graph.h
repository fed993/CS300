
#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "edge.h"

template<typename T>
class Graph {
    public:
        Graph();
        ~Graph();
        void insert(char data);
        void remove(const T& nodeOne, const T& nodeTwo);

        void BFS(const T& start);
        void DFS(const T& start);

        std::vector<Edge> getEdges();

        bool hasEdge(const T& source, const T& destination) const;
        std::vector<T> getNeighbors(const T& vertex) const;
        std::vector<T> getVertices() const;
    private:
        std::vector<Edge> theGraph;
};

template<typename T>
void Graph<T>::remove(const T& source, const T& destination) {
    for (auto it = edges.begin(); it != edges.end(); ++it) {
        if (it->first == source && it->second == destination) {
            edges.erase(it);
            break;
        }
    }
}

template<typename T>
bool Graph<T>::hasEdge(const T& source, const T& destination) const {
    for (const auto& edge : edges) {
        if (edge.first == source && edge.second == destination) {
            return true;
        }
    }
    return false;
}

template<typename T>
std::vector<T> Graph<T>::getNeighbors(const T& vertex) const {
    std::vector<T> neighbors;
    for (const auto& edge : edges) {
        if (edge.first == vertex) {
            neighbors.push_back(edge.second);
        }
    }
    return neighbors;
}

template<typename T>
std::vector<T> Graph<T>::getVertices() const {
    std::vector<T> vertices;
    for (const auto& edge : edges) {
        vertices.push_back(edge.first);
        vertices.push_back(edge.second);
    }
    return vertices;
}

#endif  // GRAPH_H