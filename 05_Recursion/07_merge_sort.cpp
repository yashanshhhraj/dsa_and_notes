#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int> temp(end - start + 1);

    int left = start, right = mid + 1, index = 0;
    while(left <= mid && right <= end) {
        if(arr[left] <= arr[right]) {
            temp[index] = arr[left];
            index++, left++;
        }

        else {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // If left Array is not empty
    while(left <= mid) {
        temp[index] = arr[left];
        index++, left++;
    }

    // If right Array is not empty
    while(right <= end) {
        temp[index] = arr[right];
        index++, right++;
    }

    index = 0;
    // Insert these Values in Array
    while(start <= end) {
        arr[start] = temp[index];
        start++, index++;
    }
}

void mergeSort(int arr[], int start, int end) {
    // Base Case
    if(start == end) return;

    int mid = start + (end - start) / 2;
    // Left Array
    mergeSort(arr, start, mid);

    // Right Array
    mergeSort(arr, mid + 1, end);

    // Sorting and Merging Arrays
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    mergeSort(arr, 0, 9);

    for(int i = 0; i < 10; i++)
    cout << arr[i] << ", ";
}