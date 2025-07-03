#include <iostream>
using namespace std;

void printColumnWise(int num[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << num[i][j] << ", ";
        }
    }
}

int main()
{
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr_col[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // ? Printing a 2D array row wise
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << ", ";
    //     }
    // }

    // ? Printing values column wise through a function
    // printColumnWise(arr_col, 3, 4);

    // ? Searching in a 2D array
    // int x = 3;
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 3; j++){
    //         if(arr[i][j] == x){
    //             cout << "Index of " << x << " is : " << i << ", " << j << endl;
    //             return 0;
    //         }
    //     }
    // }

    // cout << "Element not found : " << -1 << ", " << -1 << endl;

    // ? Adding two matrices
    // int arr_1[3][4] = {2, 3, 4, 5, 0, 1, 2, 3, 1, 2, 6, 4};
    // int arr_2[3][4] = {3, 4, 1, 2, 2, 2, 2, 0, 1, 3, 5, 4};
    // int ans_add[3][4];
    // int ans_sub[3][4];

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 4; j++)
    //     {
    //         ans_add[i][j] = arr_1[i][j] + arr_2[i][j];
    //     }
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 4; j++)
    //     {
    //         cout << ans_add[i][j] << ", ";
    //     }
    // }
    // cout << endl;

    // ? Similarly, we can Subtract
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 4; j++)
    //     {
    //         ans_sub[i][j] = arr_1[i][j] - arr_2[i][j];
    //     }
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 4; j++)
    //     {
    //         cout << ans_sub[i][j] << ", ";
    //     }
    // }
}