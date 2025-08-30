#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void printInWindowOfSizeK(vector<int> arr, int k) {
    if(k > arr.size()) return;

    queue<int> q;

    // Push K - 1 elements into queue
    for(int i = 0; i < k - 1; i++)
    q.push(i);

    // Iterate through the window to print elements
    int idx = k - 1;
    while(idx != arr.size()) {
        q.push(idx); // Push the element at last

        // Print elements in queue
        queue<int> temp = q; 
        while (!temp.empty()) {
            cout << arr[temp.front()] << " ";
            temp.pop();
        }
        cout << endl;

        q.pop(); // Pop the element from front
        idx++; // Moving to next element
    }
}

int main() {
    vector<int> arr = {3, 4, 5, 6, 7, 2, 1, 4, 7};
    printInWindowOfSizeK(arr, 6);
}