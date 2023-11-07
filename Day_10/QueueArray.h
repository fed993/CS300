#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

class QueueArray {
    private:
        int *m_arr;
        int m_size;
        int m_num_used;

        int m_front;
        int m_end;
    public:
        void enqueue(int data);
        int dequeue();
        int peek();

        bool isFull();
        bool isEmpty();

        QueueArray();
        ~QueueArray();
};

#endif