#ifndef NODE_H
#define NODE_H
#include "edge.h"

template <typename T>
class Node {
    private:
        char m_data;
        Edge<T>** m_edges; // array of edges
    public:
        // Getter for m_data
        char getData() const {
            return m_data;
        }

        // Setter for m_data
        void setData(char data) {
            m_data = data;
        }

        // Getter for m_edges
        Edge<T>** getEdges() const {
            return m_edges;
        }

        // Setter for m_edges
        void setEdges(Edge<T>** edges) {
            m_edges = edges;
        }

        Node(const T& value) : m_data(value), next(nullptr) {}
};

#endif 