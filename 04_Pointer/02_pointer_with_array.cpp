#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 5, 3, 1};
    int * ptr = arr;
    int n = sizeof(arr)/sizeof(arr[0]);

    // // ? Printing Elements
    // cout << "Printing Elements:" << endl;
    // for(int i = 0; i < n; i++)
    // cout << *(arr + i) << ", ";
    // cout<< endl << endl;

    // // ? Accessing Adresses of 0 index elements
    // cout << "Accessing Addresses at 0 index:" << endl;
    // cout << arr << endl;
    // cout << arr + 0 << endl;
    // cout << &arr[0] << endl;

    // // With pointer
    // cout << ptr << endl << endl;

    // // ? Accessing Adresses of 1 index elements
    // cout << "Accessing Addresses at 1 index:" << endl;
    // cout << arr + 1 << endl;
    // cout << &arr[1] << endl;

    // // With pointer
    // cout << ptr + 1 << endl << endl;
    
    // // Printing Addresses
    // cout << "Printing Addresses:" << endl;
    // for(int i = 0; i < n; i++)
    // cout << arr + i << endl;
    // cout << endl;
    
    // // Printing the values at 0 index
    // cout << "Printing the values at 0 index:" << endl;
    // cout << arr[0] << endl;
    // cout << *arr << endl;
    // cout << *(arr + 0) << endl;
    // cout << *ptr << endl;
    
    // ! Using pointer as array
    // // ? Printing all the values with pointer
    // cout << "Printing all the values with pointer:" << endl;
    // for(int i = 0; i < n; i++)
    // cout << ptr[i] << ", ";
    // cout << endl << endl;
    
    // // ? Printing all the addresses with pointer
    // cout << "Printing all the addresses with pointer:" << endl;
    // for(int i = 0; i < n; i++)
    // cout << ptr + i << ", ";
    // cout << endl << endl;

    // // ? Printing all the elements of the array with pointer and arithmetic operations like ptr++, ptr-- or ptr = ptr + 1
    // for(int i = 0; i < n; i++) { //? If you access out of bound index, you will get 
    //     cout << *ptr << ", ";
    //     ptr++;
    // }

    // for(int i = 0; i < n; i++) {
    //     ptr--;
    //     cout << *ptr << ", ";
    // }

    // ? Addition & Subtraction
    // ptr += 3;
    // cout << *ptr << endl;
    // ptr -= 2;
    // cout << *ptr << endl;

    // ? Null Pointer
    // ptr = 0;
    // cout << *(ptr) << endl;

    // // Changing value of arr
    // arr++; // ! Not Allowed
}