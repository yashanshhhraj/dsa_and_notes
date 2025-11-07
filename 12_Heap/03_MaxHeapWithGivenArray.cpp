#include<iostream>
using namespace std;

// Heapify : Moving arr[] to correct position
void Heapify(int arr[], int ind, int n) {
    int largest = ind;
    int left = (2 * ind) + 1;
    int right = (2 * ind) + 2;

    if(left < n && arr[left] > arr[largest])
    largest = left;
    
    if(right < n && arr[right] > arr[largest])
    largest = right;

    if(largest != ind) {
        swap(arr[largest], arr[ind]);
        Heapify(arr,largest,n);
    }
}

// Building Heap with Step Down Approach
void BuildMaxHeap(int arr[], int n) {
    for(int i = (n / 2) - 1; i >= 0; i--) {
        Heapify(arr, i, n);
    }
}

// Printing Elements of Heap
void printHeap(int arr[], int n) {
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main() {
    int arr[] = {3, 4, 23, 1, 6, 77, 87, 5, 29, 90};
    BuildMaxHeap(arr, 10);

    printHeap(arr, 10);
}