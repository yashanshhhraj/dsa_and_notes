#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j - 1])
            swap(arr[j], arr[j - 1]);

            else
            break;
        }
    }
}

int main()
{
    int arr[7] = {786, 4325, 786, 3455, 2376, 3245, 8};
    insertionSort(arr, 7);

    for(int i = 0; i < 7; i++)
    cout << arr[i] << ", ";
}