#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int i) {
    if (i == -1) return 0;
    if(arr[i] == n) return 1;

    return linearSearch(arr, n, i - 1);
}

int binarySearch(int arr[], int x, int start, int end) {
    if(start > end) return -1;

    int mid = start + (end - start) / 2;
    // int mid = end + (start - end) / 2;

    if(arr[mid] == x) return mid;
    else if (arr[mid] > x) return binarySearch(arr, x, mid + 1, end);
    else return binarySearch(arr, x, start, mid - 1);
}

int main() {
    // int arr[] = {3, 5, 7, 1, 8, 9, 4, 7, 4, 5 , 3, 2};

    // int n = 0;
    // // ? Linear Search with Reursion
    // if(linearSearch(arr, n, 11)) cout << n << " is present in the array." << endl;
    // else cout << n << " is not present in the array." << endl;

    // Getting index if present, else -1;
    // cout << linearSearch(arr, n, 11) << endl;

    // ? Binary Search
    // int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 56};
    // int arr[] = {56, 9, 8, 7, 6, 5, 4, 3, 2};
    int arr[] = {10, 8, 7, 7, 4, 3};
    int x = 10;
    cout << binarySearch(arr, x, 0, 5) << endl;

    // cout << (-5/2) << endl;
}