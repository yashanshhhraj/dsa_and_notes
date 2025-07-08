#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n;

    cout << "n - 1 : " << n - 1 << ", n - 2 : " << n - 2 << endl;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cout << "Enter a number to find fibonacci of: ";
    cin >> n;

    cout << fibo(n);
}