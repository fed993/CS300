#include <iostream>
#include "quicksort.cpp"

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    QuickSort sortyboi;

    std::cout << "the array before sort is [";
    for (int i : arr) {
        std::cout << " " << i << ",";
    }
    std::cout << " ]";

    sortyboi.sort(arr, 10);

    std::cout << "the array after sort is [";
    for (int i : arr) {
        std::cout << " " << i << ",";
    }
    std::cout << " ]";
}