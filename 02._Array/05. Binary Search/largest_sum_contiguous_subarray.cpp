#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int maxSum(vector<int> arr) {
//     int n = arr.size(), ans = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         int prefix = 0;
//         for(int j = i; j < n; j++) {
//             prefix += arr[j];
//             ans = max(prefix, ans);
//         }
//     }

//     return ans;
// }

// Kadane's Algorithm
int maxSum(vector<int> arr) {
    int n = arr.size(), ans = INT_MIN, prefix = 0;;

    for(int i = 0; i < n; i++) {
        prefix += arr[i];
        ans = max(prefix, ans);
        if(prefix < 0) prefix = 0;
    }

    return ans;
}

int main () {
    vector<int> arr = {4, -6, 2, 8}; // 10
    // vector<int> arr = {3, 4, -5, 8, -12, 7, 6, -2}; // 13

    cout << maxSum(arr) << endl;
}