#include<iostream>
#include<climits>
using namespace std;


void printArr(int arr[], int n) {
    if(n == -1) return;
    printArr(arr, n - 1);
    cout << arr[n] << ", ";
}

int arrSumD(int arr[], int i, int n) {
    if(i == n) return 0;
    // if(i == n - 1) return arr[n - 1];
    return arr[i] + arrSumD(arr,i + 1, n);
}

int arrSumS(int arr[], int n) {
    // if(n == -1) return 0;
    if(n == 0) return arr[0];
    return arr[n] + arrSumS(arr, n - 1);
}

int minElement(int arr[], int n ) {
    if(n == 0) return arr[0];
    return min(arr[n], minElement(arr, n - 1));
}

int main() {
    int arr[6] = {2, 4, 3, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // ? Printing elements of an array hrough recursion
    // printArr(arr, n - 1);

    // ? Getting sum of elements of an array
    // cout << arrSumD(arr, 0, n);
    // cout << arrSumS(arr, n - 1);

    // ? Getting Minimum Element in an array
    cout << minElement(arr, n - 1) << endl;
}