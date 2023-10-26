#include <iostream>
#include "bubbleSort.h"

void BubbleSort::sort(int *array, int length) {
    length--;
    int swaps = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i; j++) {
            std::cout << "Dealing with " << j << std::endl;
            if (array[j] > array[j + 1]) {
                // swap algorithm
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swaps++;
            }
        }
        swaps = 0;

        std::cout << " current array status: [";
        for (int k = 0; k < length + 1; k++) {
            std::cout << array[k] << ", ";
        }
        std::cout << "]" << std::endl;
    }
}