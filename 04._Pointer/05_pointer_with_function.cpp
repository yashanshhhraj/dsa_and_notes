#include <iostream>
#include <vector>
using namespace std;

void incr(int *ptr) {
    *ptr = *ptr + 1;
}

void doub(int p[], int n) { // p[] similar to *p
    for(int i = 0; i < n; i++)
    p[i] = p[i] * 2;
}

void swapIt(int *f, int *s) { // Pass by Pointer
    int temp = *f;
    *f = *s;
    *s = temp;
}

void swapItPBR(int &f, int &s) { // With Reference Variable
    int temp = f;
    f = s;
    s = temp;
}

void twenty(vector<int> &vec) {
    for(int i = 0; i < 5; i++)
    vec[i] = 20;
}

int main() {
    // ? With Integers
    // int num = 10;
    // int temp = num;
    // incr(&num);
    // cout << num << endl;

    // ? With Arrays
    // int arr[5] = {2, 1, 4, 3, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // doub(arr, n);

    // for(int i = 0; i < n; i++)
    // cout << arr[i] << ", ";

    // ? Swapping with pointers
    // For first & second
    //  10      15     // ? Value
    // first   second  // ? Variable Name
    //  400     800    // ? Adresses of first & second

    // For pointers f & s
    // 400 800 // ? Value
    //  f   s  // ? Variable Name
    // 200 500 // ? Adresses of f & s


    // int first = 10, second = 15;
    // cout << "First: " << first << ", Second: " << second << endl;
    
    // // swapIt(&first, &second);
    // swapItPBR(first, second); // Help of Reference Variable With
    
    // cout << "First: " << first << ", Second: " << second << endl;

    // ? Reference Variable
    // int num = 10;
    // int &temp = num;

    // cout << temp << endl; // 10
    // num++;
    // cout << temp << endl; // 11

    // cout << &temp << endl;
    // cout << &num << endl;

    // Pass with Reference with Vector
    // vector<int> v(5, 0);

    // twenty(v);
    // for(int i = 0; i < 5; i++)
    // cout << v[i] << ", ";

    // ? vector, string etc. --> Use Reference
    // ? int arr, char arr etc. --> Use Pointer
}