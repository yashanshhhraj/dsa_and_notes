#include <iostream>
using namespace std;

void swap(int &m, int &n)
{
    m += n;
    n = m - n;
    m -= n;
}

int main()
{
    int a, b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;

    cout << endl << "- - - Before Swaping - - -" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    swap(a, b);

    cout << endl << "- - - After Swaping - - -" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
}