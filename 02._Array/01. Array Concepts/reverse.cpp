#include <iostream>
#include <vector>
using namespace std;

// void reverse(std::vector<int> &arr)
// {
//     int length = arr.size();
//     int index = 0;
//     int arrFinal[length];
//     for(int i=length - 1; i >= 0; i--)
//     {
//         arrFinal[index] = arr[i];
//         index++;
//     }

//     cout << "Reversed Array --->";
//     for (int i=0; i < length; i++)
//     {
//         cout << arrFinal[i] << ", ";
//     }
// }

int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    std::vector<int> arr(size);

    cout << "Enter Elements one by one : " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Actual Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    // reverse(arr);

    int i = size - 1, j = 0;
    int tempArr[size];

    while(i >= 0)
    {
        tempArr[j] = arr[i];
        j++;
        i--;
    }

    cout << endl << "Reversed Array :" << endl;

    for(int i = 0; i < size; i++)
    cout << tempArr[i] << ", ";
}