#include <iostream>
using namespace std;

int main() {
    // ? 2D Arrays
    // int n, m;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // cout << "Enter the number of columns: ";
    // cin >> m;

    // // Allocating Memory to 1D array containing addresses
    // int ** arr = new int * [n];

    // // Creating Arrays of size n for columns
    // for(int i = 0; i < n; i++)
    // *(arr + i) = new int [m]; // *(arr + i) => arr[i];

    // // Assigning Values 
    // for(int i = 0; i < n; i++)
    // for(int j = 0; j < m; j++) {
    //     cout << i << ", " << j << "th Value: ";
    //     cin >> *(*(arr + i) + j); // *(*(arr + i) + j) = arr[i][j];
    // }

    // // Printing the values
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++)
    //     cout << *(*(arr + i) + j) << ", "; // *(*(arr + i) + j) = arr[i][j];

    //     cout << endl;
    // }

    // // Releasing the memory
    // for(int i = 0; i < n; i++)
    // delete[] *(arr + i); // *(arr + i) => arr[i];

    // delete[] arr;

    // ? 3D Arrays
    int d, c, r;

    cout << "Enter the depth: ";
    cin >> d;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    // Creating 1D array
    int ***arr = new int **[d];

    // Creating 2D array and store its address in arr
    for(int i = 0; i < d; i++) {
        arr[i] = new int *[r];

        for(int j = 0; j < r; j++)
        arr[i][j] = new int [c];
    }

    // Assigning Values
    for(int i = 0; i < d; i++)
    for(int j = 0; j < r; j++)
    for(int k = 0; k < c; k++)
    cin >> arr[i][j][k];

    // Pringting Values
    for(int i = 0; i < d; i++){
        for(int j = 0; j < r; j++){
            for(int k = 0; k < c; k++)
            cout << arr[i][j][k];

            cout << endl;
        }
        cout << endl;
    }

    // Deallocatting Memory
    for(int i = 0; i < d; i++) {
        for(int j = 0; j < r; j++)
        delete[] arr[i][j];

        delete[] arr[i];
    }

    delete[] arr;
}