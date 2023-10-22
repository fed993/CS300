#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
    public:
        Node<T>(T data);
        void setData(T data) { m_data = data; }
        void setLink(Node *link) { m_previous = link; }
        T getData() { return m_data; }
        Node<T>* getLink() { return m_previous; }
    private:
        T m_data;
        Node<T> *m_previous;
};

#endif