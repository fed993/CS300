#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort {
    private:
        int *m_array;
        void sort(int left, int right);
        int partition(int left, int right, int pivot);
        void swap(int first, int second);
    public:
        ~QuickSort() { delete[] m_array; }
        void sort(int *arr, int size);
};

#endif