#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int sumOfN(int n) {
    if (n == 1) return n;
    return n + sumOfN(n - 1);
}

void coutFun(auto arg) {
    cout << arg << endl;
    coutFun(arg);
}

int powerOfNum(int num, int n) {
    if (n == 0) return 1;
    return num * powerOfNum(num, n - 1);
}

int squareN(int n) {
    if(n == 0) return 0;
    return (n * n) + squareN((n - 1));
}

int main() {
    // ? Factorial of a Number
    // int n;
    // cout << "Enter a number: " << endl;
    // cin >> n;
    // if (n < 0) {
    //     cout << "Factorial does not exists for negative numbers!" << endl;
    //     return 0;
    // }

    // cout << fact(n) << endl;

    // ? Sum of n natural number
    // int n;
    // cout << "Enter a number to find sum upto: " << endl;
    // cin >> n;

    // if (n < 0) {
    //     cout << "Negative Numbers not Allowed!" << endl;
    //     return 0;
    // }

    // cout << sumOfN(n) << endl;
    
    // ? Infininte Recursion
    // coutFun("Yashansh");


    // // ? Power of 2
    // int n, num;
    // cout << "Enter a number to find power of : ";
    // cin >> num;
    // cout << "Enter a number to find power of " << num << " upto: ";
    // cin >> n;
    
    // if (n < 0) {
    //     cout << "Negative Numbers not Allowed!" << endl;
    //     return 0;
    // }
    
    // cout << powerOfNum(num, n) << endl;
    
    // ? Sum of square of n mumebers
    int n;
    cout << "Enter a number to find sun of square: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Negative Numbers not Allowed!" << endl;
        return 0;
    }
    
    cout << squareN(n) << endl;
}