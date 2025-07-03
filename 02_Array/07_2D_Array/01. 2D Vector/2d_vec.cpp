#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ? Taking custom size of 2D array
    int n, m;
    cout << "Enter number of 'rows' :";
    cin >> n;
    cout << "Enter number of 'columns' :";
    cin >> m;

    // ? Creating 2D Vector
    vector<vector<int>> matrix(n, vector<int>(m, 2));

    // for(int i = 0; i < 3; i++)
    // for(int j = 0; j < 4; j++)
    // cout << matrix[i][j] << ", ";

    // ? Getting Number of 'rows' & 'columns'
    // cout << "Rows : " << matrix.size() << endl;
    // cout << "Cols : " << matrix[0].size() << endl;

    // ? Taking user input of elements of vector
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    cin >> matrix[i][j];

    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        cout << matrix[i][j] << ", ";

        cout << endl;
    }
}