#include <iostream>
#include <vector>
using namespace std;

int perfectSumCheck(int arr[], int i, int n, int target) {
    if(target < 0) return 0;
    if(i == n) return target == 0;

    // Element to be included
    return perfectSumCheck(arr, i + 1, n, target - arr[i]) + perfectSumCheck(arr, i + 1, n, target);
}

int main()
{
    int arr[] = {2, 3, 4};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << perfectSumCheck(arr, 0, n, target);
}