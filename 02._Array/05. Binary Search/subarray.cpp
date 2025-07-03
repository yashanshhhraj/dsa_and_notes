#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Print subarray from index i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

// void subArray(vector<int> arr) {
//     int n = arr.size();
    
//     // Lengths from 1 to n
//     for (int length = 1; length <= n; ++length) {
//         // Start from the back so the subarrays begin with larger numbers first
//         for (int start = 0; start <= n - length; ++start) {
//             int end = start + length - 1;
//             // Print subarray
//             for (int i = start; i <= end; ++i) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

int main() {
    vector<int> arr = {4, 3, 7, 2};

    subArray(arr);
}