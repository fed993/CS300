#include "quicksort.h"

// find pivot
// swap pivot and right
// init two indicies, one to left edge and one right edge
// iterate lefty until bigger than pivot, then iterate righty until smaller than pivot
// swap when find two that need swapping
// repeat until you pass the pivot
// swap pivot with lefty
// create new sections, one right of pivot, one left of pivot
// run the same above sort on each section
// if a section is size 1 or 0 then that is base case

void QuickSort::sort(int array[], int size) {
    m_arr = array;

    sortRec(0, (size-1));
}

void QuickSort::sortRec(int left, int right) {
    int size = ((right + 1) - left);
    if (size > 1) {
        int pivot = partition(left, right);

        sortRec(left, (pivot-1));
        sortRec((pivot + 1), right);
    }
}

int QuickSort::partition(int leftbound, int rightbound) {
    int pivot = (rightbound + leftbound) / 2;

    int lefty_pointy = leftbound;
    int righty_pointy = rightbound - 1;
    swap(pivot, rightbound);

    pivot = rightbound;

    while (lefty_pointy <= righty_pointy) { // this is the actual sorty part
        while(m_arr[lefty_pointy] < m_arr[pivot] && lefty_pointy <= rightbound) {
            lefty_pointy++;
        }
        while(m_arr[righty_pointy] >= m_arr[pivot] && righty_pointy >= leftbound) {
            righty_pointy--;
        }
        if ((lefty_pointy < righty_pointy) && (m_arr[lefty_pointy > m_arr[righty_pointy]])) {
            swap(lefty_pointy, righty_pointy);
        }        
    }

    //sorty done, so lets put the pivot back in the middle
    swap(pivot, lefty_pointy);
    pivot = lefty_pointy;

    return pivot;
}

void QuickSort::swap(int first, int second) {
    int temp = m_arr[first];
    m_arr[first] = m_arr[second];
    m_arr[second] = temp;
}