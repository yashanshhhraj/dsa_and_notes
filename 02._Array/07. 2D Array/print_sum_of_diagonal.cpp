#include <iostream>
using namespace std;

void diagonalSum(int nums[][4], int row, int col)
{
    int first_sum = 0, second_sum = 0;

    for(int i = 0; i < row; i++)
    {
        first_sum += nums[i][i];
        // second_sum += nums[i][row - i - 1];
    }

    int i = 0, j = col - 1;
    while(j >= 0)
    {
        second_sum += nums[i][j];
        i++, j--;
    }

    cout << "First Sum: " << first_sum << endl;
    cout << "Second Sum: " << second_sum << endl;
}

int main()
{
    int arr[4][4] = {5, 8, 3, 9, 6, 2, 8, 4, 5, 3, 2, 2, 2, 8, 1, 9};

    diagonalSum(arr, 4, 4);
}