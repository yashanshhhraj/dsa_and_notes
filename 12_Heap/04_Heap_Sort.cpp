#include<iostream>
using namespace std;

// Heapify Function : Function to place the value in the correct position
void Heapify(int arr[], int ind, int n) {
    int largest = ind; // Considering current element as largest
    int left = (2 * ind) + 1;
    int right = (2 * ind) + 2;

    // If left element is largest
    if(left < n && arr[left] > arr[largest])
    largest = left;
    
    // If right element is largest
    if(right < n && arr[right] > arr[largest])
    largest = right;

    if(largest != ind) {
        swap(arr[largest], arr[ind]);
        Heapify(arr, largest, n);
    }
}

// Building Heap with Step Down
void BuildMaxHeap(int arr[], int n) {
    for(int i = (n - 1) / 2; i >= 0; i--)
    Heapify(arr, i, n);
}

// Heap Sort Function
void HeapSort(int arr[], int n) {
    while(n) {
        swap(arr[0], arr[n - 1]);
        Heapify(arr, 0, n - 1);
        n--;
    }
}

// Printing Element
void print(int arr[], int n) {
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";

    cout << endl;
}

int main() {
    int arr[] = {23, 2, 52, 13, 14, 25, 18, 10, 42, 88};

    // Converting Array to max heap
    BuildMaxHeap(arr, 10);

    // Applying Heap Sort
    HeapSort(arr, 10);

    // Printing Heap
    print(arr, 10);
}

/* 
// ? Leetcode : 912 Ke liye

class Solution {
public:
    // Heapify Function : Function to place the value in the correct position
    void Heapify(vector<int>& nums, int & ind, int & n) {
        int largest = ind; // Considering current element as largest
        int left = (2 * ind) + 1;
        int right = (2 * ind) + 2;

        // If left element is largest
        if(left < n && nums[left] > nums[largest])
        largest = left;
        
        // If right element is largest
        if(right < n && nums[right] > nums[largest])
        largest = right;

        if(largest != ind) {
            swap(nums[largest], nums[ind]);
            Heapify(nums, largest, n);
        }
    }

    // Building Heap with Step Down
    void BuildMaxHeap(vector<int>& nums) {
        int n = nums.size();
        for(int i = (n - 1) / 2; i >= 0; i--)
        Heapify(nums, i, n);
    }

    // Heap Sort Function
    void HeapSort(vector<int>& nums) {
        int n = nums.size(), ind = 0;
        while(n) {
            swap(nums[0], nums[n - 1]);
            Heapify(nums, ind, n - 1);
            n--;
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        // Converting Array to max heap
        BuildMaxHeap(nums);

        // Applying Heap Sort
        HeapSort(nums);

        return nums
    }
};

*/