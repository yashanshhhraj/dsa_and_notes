#include <iostream>
using namespace std;

int main() {
    char arr[5] = "1234";
    char name = 'a';
    // cout << arr << endl;
    // cout << name << endl;

    // Creating Pointer
    void * ptr = arr;
    // cout << ptr << endl;

    // Getting Address
    cout << (void *) arr << endl;
    cout << (void *) ptr << endl;

    char * ptrName = &name;
    cout << (void *)&name << endl;
    cout << ptrName << endl;

    // Using static_cast method
    cout << static_cast<void*>(arr)<< endl;
}