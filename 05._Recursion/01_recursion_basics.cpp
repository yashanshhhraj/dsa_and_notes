#include <iostream>
#include <windows.h>
using namespace std;

// ! Non Recursive Approach
void func4(int); // Function declarations
void func3(int);
void func2(int);
void func1(int);
void func0(int);
void func4(int n)
{
    cout << n << " days left for birthday!" << endl;
    func3(n - 1);
}

void func3(int n)
{
    cout << n << " days left for birthday!" << endl;
    func2(n - 1);
}
void func2(int n)
{
    cout << n << " days left for birthday!" << endl;
    func1(n - 1);
}
void func1(int n)
{
    cout << n << " days left for birthday!" << endl;
    func0(n - 1);
}
void func0(int n)
{
    cout << "Happy Birthday!" << endl;
}

// ! Recursive approach (Function Calls itself);
void funcHappyBirthday(int n)
{
    // Base Case
    if (n == 0)
    {
        cout << "Happy Birthday" << endl;
        return; // Return and don't call function anymore.
    }

    cout << n << " days left for birthday!" << endl;
    funcHappyBirthday(n - 1);
}

// ! Recursive function to print number from n to 1
void printFromN(int n) {
    if(n == 1) {
        cout << n << endl;
        return;
    }
    
    cout << n << endl;
    printFromN(n - 1);
}

// ! Recursive function to print even number from n to 1 given number entered in starting is even
void printEvenFromN(int n) {
    if(n == 2) {
        cout << n << endl;
        return;
    }
    
    cout << n << endl;
    printEvenFromN(n - 2);
}

// ! Recursive function to print number from 1 to n (Double Argument)
void print1ToNDouble(int num, int n) {
    if(num == n) {
        cout << num << endl;
        return;
    }
    cout << num << endl;
    print1ToNDouble(num + 1, n);
}

// ! Recursive function to print number from 1 to n
void print1ToNSingle(int n) {
    if(n == 1) {
        cout << n << endl;
        return;
    }
    print1ToNSingle(n - 1);
    cout << n << endl;
}

// ! Recursive function to Even print number from 1 to n (Double Argument)
void printEven1ToNDouble(int num, int n) {
    if(num > n) return;

    cout << num << endl;
    printEven1ToNDouble(num + 2, n);
}

// ! Recursive function to print number from 1 to n (Single Argument)
void printEven1ToNSingle(int n) {
    if(n % 2) n -= 1;

    if(n < 2) return;

    printEven1ToNSingle(n - 2);
    cout << n << endl;
}

int main()
{
    // ? Calling Function Individually
    // func4(4);
    // func3(3);
    // func2(2);
    // func1(1);
    // func0(0);

    // ? Without Recursion (Calling one function after another)
    // func4(4);

    // int n;
    // cout << "Enter Number of Days Left: ";
    // cin >> n;
    // // ? Iterative Approach
    // for(int i = n; i > 0; i--)
    // cout << i << " days left for birthday!" << endl;

    // cout << "Happy Birthday!" << endl;

    // ? With Recursion
    // funcHappyBirthday(n);

    // // ? Printing Number form n to 1 with Recursion
    // int n;
    // cout << "Enter the number to start printing from: ";
    // cin >> n;

    // printFromN(n);

    // ? Printing all Even Numbers form n to 1 with Recursion
    // int n;
    // cout << "Enter Even Number only!" << endl;
    // cout << "Enter the number to start printing from: ";
    // cin >> n;

    // if(n % 2) {
    //     cout << "Enter Even Number only!" << endl;
    //     return 0;
    // }

    // printEvenFromN(n);

    // ? Printing number from 1 to N with Recursion
    // int n;
    // cout << "Enter number to print number upto: ";
    // cin >> n;
    
    // print1ToNDouble(1, n);
    // print1ToNSingle(n);
    
    // ? Printing even number from 1 to N with Recursion given that the number entered is even
    int n;
    cout << "Enter number to print even number upto: ";
    cin >> n;

    // printEven1ToNDouble(2, n);
    printEven1ToNSingle(n);
}