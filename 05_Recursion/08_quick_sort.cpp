#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pos = start;
    for(int i = start; i <= end; i++) {
        if(arr[i] >= arr[end]){
            swap(arr[pos], arr[i]);
            pos++;
        }
    }

    return pos - 1;
}

void quickSort(int arr[], int start, int end) {
    if(start >= end) return; // Base Case

    // Finding Pivot
    int pivot = partition(arr, start, end);

    // Forming Left Side Array
    quickSort(arr, start, pivot - 1);
    // Forming RIght Side Array
    quickSort(arr, pivot + 1, end);
}

int main() {
    int arr[] = {12, 3, 4, 13, 1, 6, 8, 7, 5, 6, 4, 3};
    // int arr[] = {434, 232, 123, 45, 223, 4322, 67, 8, 32, 2};
    quickSort(arr, 0, 11);

    for(int i = 0; i < 12; i++)
    cout << arr[i] << ", ";
}