#ifndef EDGE_H
#define EDGE_H

template <typename T>
class Edge {
public:
    Edge(T first, T second, double weight) : m_nodeOne(first), m_nodeTwo(second), weight(weight) {}

    T getNodeOne() const {
        return m_nodeOne;
    }

    T getNodeTwo() const {
        return m_nodeTwo;
    }

    double getWeight() const {
        return weight;
    }

private:
    T m_nodeOne;
    T m_nodeTwo;
    double weight; //  can be multiple weights with final output weight being the algorithmically determined 
};

#endif // EDGE_H
