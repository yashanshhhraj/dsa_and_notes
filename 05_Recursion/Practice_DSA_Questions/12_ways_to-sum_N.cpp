#include<iostream>
using namespace std;

int ways(int arr[], int n, int target) {
    if(target == 0) return 1;
    if(target < 0) return 0;
    
    int way = 0;
    for(int j = 0; j < n; j++) {
        way += ways(arr, n, target - arr[j]);
    }

    return way;
}

int main() {
    int arr[] = {1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    cout << ways(arr, n, target) << endl;
}