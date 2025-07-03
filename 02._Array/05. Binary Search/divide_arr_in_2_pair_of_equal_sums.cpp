#include <iostream>
#include <vector>
using namespace std;

// bool pairOfEqualSums(vector<int> arr) {
//     int n = arr.size();

//     for(int i = 0; i < n - 1; i++) {
//         int left = 0, right = 0;
//         for(int j = 0; j < n; j++) {
//             if(j <= i) left += arr[j];
//             else right += arr[j];
//         }

//         if (left == right) {
//             cout << "Equal Sums at index: " << i << endl;
//             return true;
//         }
//     }

//     return false;
// }
bool pairOfEqualSums(vector<int> arr) {
    int n = arr.size(), total_sum = 0;

    for(int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int prefix = 0, right_sum;
    for(int i = 0; i < n - 1; i++) {
        prefix += arr[i];
        right_sum = total_sum - prefix;
        if(right_sum == prefix) {
            cout << "Equal Sums at index : " << i << endl;
            return true;
        }
    }

    return false;
}

int main () {
    // vector<int> arr = {3, 4, -2, 5, 8, 20, -10, 8};
    vector<int> arr = {2, 4, 6, 2, 1, 5, 8, 2};

    cout << pairOfEqualSums(arr) << endl;
}