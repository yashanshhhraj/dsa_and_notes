#include <iostream>
#include <climits>
using namespace std;

int printRowMax(int nums[][4], int row, int col)
{
    int index = -1, ans = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += nums[i][j];

        cout << "Sum " << sum << endl;

        if (ans < sum)
        {
            index = i;
            ans = sum;
        }
    }

    return index + 1;
}

int main()
{
    int arr[5][4] = {3, 4, 7, 8, 2, 8, 7, 9, 5, 4, 2, 2, 7, 3, 0, 8, 2, 8, 9, 1};

    cout << "row " << printRowMax(arr, 5, 4) << endl;
}