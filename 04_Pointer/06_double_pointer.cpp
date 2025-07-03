#include <iostream>
using namespace std;

void fun(int *p1) {
    *p1 = *p1 + 1;
}

void funAdd(int **p1) {
    *p1 = *p1 + 1;
}

void funRef(int &p1) {
    p1 = p1 + 1;
}

int main () {
    int n = 10;
    int *p = &n;
    int **q = &p;
    int ***r = &q;
    cout << p << endl; 
    funAdd(q); // Changes Address
    cout << p << endl; 
    // cout<< p << endl;
    // fun(p);
    // cout << n << endl;
    // cout<< p << endl;
    // fun(p);
    // cout<< p << endl;

    // Manipulating Vlues
    // **q = **q + 2;
    // ***r = ***r + 2;
    // cout << n << endl;

    // ? With Reference Varaiable
    // int n = 10;
    // int &p = n;
    // int &q = &p;
    // cout<< q << endl;
    // funRef(q);
    // cout<< q << endl;
}