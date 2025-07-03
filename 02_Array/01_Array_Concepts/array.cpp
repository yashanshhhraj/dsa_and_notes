#include <iostream>
#include <climits>
using namespace std;

void arrPrintFunc(int a[], int n) // int a[] is not array, its a pointer
{
    cout << "Size of Pointer : " << sizeof(a) << endl;
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
}

int main()
{
    // ? Array : An array is a data structure that is used to store multiple values of similar data types in contiguous memory location.
    // ! Declaration --> data_type array_nmame[size_of_array]
    // int arr[5] = {6, 8, 5, 1, 2};
    // int arr[] = {6, 8, 5, 1, 2}; // ? Size will be automatically declared.
    // int arr[5] = {1, 2}; // ? Garbage value '0' stored in the rest of the indices.
    // int arr[5] = {0};  // ? '0' will be stored in all indices. Works only for '0'.
    // ? Taking user input of elements in arr.
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter Element at " << i << " Index : ";
    //     cin >> arr[i];
    // }

    // // ! Operations of Arrays
    // // ? Printing the elements of array.
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << ", "; // Indexing starts from '0' to 'length_of_array - 1'
    // }

    // ! Getting the minimum element of array
    // int minArr[10] = {23, 43, 12, 434, 3444, 432, 5, 43, 234, 98};

    // int ans = INT_MAX;
    
    // for (int i = 0; i < 10; i++)
    // {
    //     if (minArr[i] < ans)
    //     {
    //         ans = minArr[i];
    //     }
    // }

    // cout << "Minimum Value : " << ans << endl;

    // // ! Getting the maximum element of array
    // ans = INT_MIN;
    
    // for (int i = 0; i < 10; i++)
    // {
    //     if (minArr[i] > ans)
    //     {
    //         ans = minArr[i];
    //     }
    // }

    // cout << "Maximum Value : " << ans << endl;

    // int arr[4] = {0, 1, 2, 2};
    // // cout << arr[5]; // Error(out of range of indices) or a random value will be displayed.
    // cout << sizeof(arr) << endl; // 16 = 4 * 4
    // cout << sizeof(arr)/ sizeof(arr[0]) << endl; // 4

    // ? Passing Array to the funcion
    int arr[4] = {0, 1, 2, 1};
    arrPrintFunc(arr, 4);

    return 0;
}