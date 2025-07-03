#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxDiff(vector<int> arr) {
    int ans = INT_MIN, n = arr.size();
    // ? Brute Force
    // for (int i = 0; i < n - 1; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         ans = max(ans, arr[j] - arr[i]);
    //     }
    // }

    // ? Optimized Version
    int max_val = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        max_val = max(arr[i], max_val);
        ans = max(ans, max_val - arr[i]);
    }

    return ans;
}

int main() {
    vector<int> v = {9, 5, 8, 12, 2, 3, 7, 4};

    cout << maxDiff(v) << endl;
}