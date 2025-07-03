#include <iostream>
#include <vector>
using namespace std;

void printWaveForm(vector<vector<int>> mat, int n, int m)
{
    for(int j=0; j<n; j++)
    {
        if(j % 2 == 0)
        {
            for(int i = 0; i < m; i++)
            cout << mat[i][j] << ", ";
        }

        else
        {
            for(int i = m - 1; i >= 0; i--)
            cout << mat[i][j] << ", ";
        }
    }
}

int main()
{
    // ? Taking custom size of 2D array
    int n, m;
    cout << "Enter number of 'rows' :";
    cin >> n;
    cout << "Enter number of 'columns' :";
    cin >> m;

    vector<vector <int>> matrix (n, vector<int> (m));

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    cin >> matrix[i][j];

    printWaveForm(matrix, n, m);
}