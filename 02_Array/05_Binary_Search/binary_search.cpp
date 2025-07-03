#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int t)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (t > arr[mid])
        low = mid + 1;

        else if (t < arr[mid])
        high = mid - 1;

        else
        return mid;
    }

    return -1;
}

int main()
{
    int arr[1000];
    int n, target;

    // Taking input of size of array
    cout << "Enter the size of arrays: ";
    cin >> n;

    // Check if the array is of valid size
    if (n <= 0 || n > 1000)
    {
        cout << "Invalid array size" << endl;
        return 1;
    }

    // Taking input of elements
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Taking inout of elements
    cout << "Enter the number to be searched: ";
    cin >> target;

    // Storing result from function in variable 'ans'
    int ans = binarySearch(arr, n, target);

    // Printing result
    if (ans == -1)
    cout << "Element not found" << endl;

    else
    cout << "Index of " << target << " is " << ans << endl;

    return 0;
}