#include <iostream>
#include <algorithm>
using namespace std;

void reverseMatrixRow(int nums[][4], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        int low = 0, high = col - 1;

        while(low < high)
        {
            swap(nums[i][low], nums[i][high]);
            low++, high--;
        }
    }
}

int main()
{
    int arr[3][4] = {2, 3, 4, 5, 1, 2, 6, 8, 4, 9, 3, 2};

    reverseMatrixRow(arr, 3, 4);

    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 4; j++)
    cout << arr[i][j] << ", ";
}