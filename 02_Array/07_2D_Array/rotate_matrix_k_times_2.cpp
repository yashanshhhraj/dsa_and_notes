#include <iostream>
#include <vector>
using namespace std;

void rotate90(vector<vector<int>> &mat) {
    int n = mat.size();

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

    cout << "Original matrix : " << endl;
    // Printing the matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        cout << matrix[i][j] << ", ";

        cout << endl;
    }

    cout << "Rotating matrix " << k <<" times : " << endl;

    k %= 4;

    while(k)
    {
        rotate90(matrix);
        k--;
    }

    // Printing the matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        cout << matrix[i][j] << ", ";

        cout << endl;
    }
}