#include <iostream> 
#include "quicksort.cpp"

using namespace std;

void array_printer(int *arr, int size) {
    cout << "current array status: [";
    for(int i = 0; i < size-1; i++) {
        cout << arr[i] << ",";
    }
    cout << arr[size-1];
    cout << "]" << endl;
}

int main() {
    int size = 20;

    int arr[20] = {19, 18, 15, 15, 15, 14, 13, 10, 11, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // cout << arr[0];

    array_printer(arr, size);

    cout<<endl;
    // for(int i = 0; i < size; i++) {
    //     arr[i] = size - i;
    // }

    QuickSort sortinator;
    
    sortinator.sort(arr, size);
    array_printer(arr, size);
}