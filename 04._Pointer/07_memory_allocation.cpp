#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];

    // for(int i = 0; i < n; i++) {
    //     arr[i] = i;
    // }

    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << ", ";
    // }

    // ? Allocating memory is heap
    // int * ptr = new int;
    // cout << ptr << endl; // Prints Address

    // // Assigning Value
    // *ptr = 5;
    // cout << *ptr << endl; // Prints Value

    // float *ptr2 = new float(3.6);
    // cout << *ptr2 << endl;

    // ? Taking user input of size of array (2D Arrays)
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *p = new int[n];

    // Adding Values to array
    for (int i = 0; i < n; i++)
        p[i] = i + 1;

    // Printing Values
    for (int i = 0; i < n; i++)
        cout << p[i] << ", ";

    // ? Releasing Heap Memory
    // delete ptr;
    // delete ptr2;
    delete p;
}