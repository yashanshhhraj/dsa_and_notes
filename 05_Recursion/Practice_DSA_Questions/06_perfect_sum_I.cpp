#include <iostream>
#include <vector>
using namespace std;

bool find(int arr[], int i, int n, int target)
{
    if (target == 0) return 1;
    if(i == n || target < 0) return 0;

    return find(arr, i + 1, n, target) || find(arr, i + 1, n, target - arr[i]);
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find(arr, 0, n, target);
}