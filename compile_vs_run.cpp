#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if(b == 0)
    cout << "Invalid Opertion of division by 0" << endl;
    cout << (a / b) << endl;
    cout << "Division Successful" << endl;
}