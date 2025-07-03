#include<iostream>
#include<vector>
using namespace std;

void rotateKTimes(vector<vector<int>> mat, int k)
{
    int n = mat.size();
    k = k % 4;

    if(k == 0)
    {
        return;
    }

    else if(k == 1)
    {
        // ? Rotate by 90 Deg
        // Transpose Diagonally
        for(int i = 0; i < n - 1; i++)
        for(int j = i+1; j < n; j++)
        swap(mat[i][j], mat[j][i]);

        // Reverse Row
        for(int i = 0; i < n; i++)
        {
            int low = 0, high = n - 1;
            while(low < high)
            {
                swap(mat[i][low], mat[i][high]);
                low++, high--;
            }
        }
    }

    else if(k == 2)
    {
        // ? Rotate by 90 Deg
        // Transpose Diagonally
        for(int i = 0; i < n - 1; i++)
        for(int j = i+1; j < n; j++)
        swap(mat[i][j], mat[j][i]);

        // Transpose Anti - Diagonally
        for(int j = n - 1; j > 0; j--)
        for(int i = j - 1; i >= 0; i--)
        swap(mat[n - i - 1][j], mat[n - j - 1][i]);
    }

    else
    {
        // ? Rotate by 90 Deg
        // Transpose Diagonally
        for(int i = 0; i < n - 1; i++)
        for(int j = i+1; j < n; j++)
        swap(mat[i][j], mat[j][i]);

        // Reverse Column
        for(int j = 0; j < n; j++)
        {
            int top = 0, bottom = n - 1;
            while(top < bottom)
            {
                swap(mat[top][j], mat[bottom][j]);
                top++, bottom--;
            }
        }
    }

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cout << mat[i][j];
}

int main()
{
    int n, k;
    cout << "Enter the size of matrix : ";
    cin >> n;

    cout << "Enter the number of times the matrix is to be rotated : ";
    cin >> k;

    vector<vector<int>> matrix (n , vector<int>(n));

    cout << "Enter the elements of the matrix : ";
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin >> matrix[i][j];

    rotateKTimes(matrix, k);
}