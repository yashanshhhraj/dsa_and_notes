#include <iostream>
using namespace std;

int main() {
    // ? Float Behaves same as with integer array
    float flo[5] = {4.5, 3.4, 2.1, 5.6, 3.2};
    cout << flo << endl;
    int n = sizeof(flo)/sizeof(flo[0]);

    float *ptr = flo;
    cout << ptr << endl;

    for(int i = 0; i < n; i++) {
        cout << *(ptr + i) << endl;
    }
}