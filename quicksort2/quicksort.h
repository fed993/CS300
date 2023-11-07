#ifndef QUICKSORT_H
#define QUICKSORT_H

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

class QuickSort {
    public:
        void sort(int array[], int size);
    private:
        int partition(int left, int right);
        void sortRec(int left, int right);
        void swap(int first, int second);

        int *m_arr;
};

#endif