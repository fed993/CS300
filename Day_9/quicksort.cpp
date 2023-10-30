#include "quicksort.h"

void QuickSort::sort(int *arr, int size) {
    m_array = arr;
    sort(0, (size-1));
};

void QuickSort::sort(int leftIndex, int rightIndex) {
    while (leftIndex < rightIndex) {
        int pivot = (int)(leftIndex + rightIndex) / 2; // we include (int) for readability, also to tell the compiler that we're doing this on purpose
        int partitionIndex = partition(leftIndex, rightIndex, pivot);

        sort(leftIndex, partitionIndex - 1);
        sort(partitionIndex + 1, rightIndex);
    }
};

int QuickSort::partition(int leftIndex,int rightIndex,int pivot){
    int lefty = leftIndex;
    int righty = rightIndex - 1; // make sure we offset the rightIndex pointer so that it doesn't start @ pivot

    swap(righty, pivot);
    pivot = righty;

    while (lefty < righty) {
        // this loop moves left pointer to the rightIndex
        while ((lefty < rightIndex) && (m_array[lefty] < m_array[pivot])) // don't let the left pointer leave the array zone, stop once value @ lefty bigger than pivot value
            lefty++;
        // this loop moves rightIndex pointer to the left
        while ((righty > leftIndex) && (m_array[righty] > m_array[pivot])) // don't let the rightIndex pointer leave the array zone, stop once value @ righty smaller than pivot value
            righty--;
        if (m_array[lefty] > m_array[righty])
            swap(lefty, righty);
    }

    swap(lefty, pivot); // swap pivot back to its correct position
    pivot = lefty;

    return pivot;
};

void QuickSort::swap(int first, int second) {
    int temp = m_array[first];
    m_array[first] = m_array[second];
    m_array[first] = temp;
};