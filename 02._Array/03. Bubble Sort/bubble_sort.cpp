#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i < n - 1; i++)
    {
        bool swapped = 0;
        for(int j=0; j < n - (i + 1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(!swapped)
        break;
    }
}

int main()
{
    int arr[6] = {-44, 166, -321, 69, -21, 45};

    bubbleSort(arr, 6);

    for(int i=0; i < 6; i++)
    cout << arr[i] << " ";
}