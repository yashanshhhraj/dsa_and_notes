#include <iostream>
using namespace std;

int main() {
    // int a = 9;
    // int* ptr = &a;
    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // float m = 2.6;
    // float *ptr1 = &m;
    // cout << ptr1 << endl;

    char txt = 'a';
    char *ptr = &txt;
    // cout << *ptr << endl; // ? Prints value
    cout << "Size of ptr: " << sizeof(ptr) << endl; // 4
    // cout << static_cast<void*>(ptr) << endl; // Prints address

    // int b = 30;
    // ptr = &b;
    // cout << *ptr << endl;

    int * p;
    // cout << p << endl;
    cout << *p << endl;
    
    int b = 20;
    p = &b;
    // cout << p << endl;
    cout << *p << endl;

    int c = 80;
    p = &c;
    // cout << p << endl;
    cout << *p << endl;
    cout << "Size of p: " << sizeof(p) << endl; // 4
    
    c = 50;
    cout << *p << endl; // 50
}