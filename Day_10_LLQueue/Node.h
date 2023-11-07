template <class T>
class Node {
    public:
        void setData(T data) { m_data = data; };
        T getData() { return m_data; }

        void setNext(Node *m_next);
        Node *getNext() { return m_next; }

        Node(T data) { m_data = data; m_next = nullptr; };
    private:
        T m_data;
        Node *m_next;
};