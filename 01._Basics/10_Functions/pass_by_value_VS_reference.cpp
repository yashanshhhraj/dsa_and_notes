#include <iostream>
using namespace std;

// ! Pass by Value
// ? A copy of value assigned to 'a' is passed to the function, hence no change is made to the original value
// void Incr(int n)
// {
//     n++;
// }

// ! Pass by Reference
// ? Memory address of original value is assigned to the function, all changes are made to them.
// void Incr(int &n)
// {
//     n++;
// }

int main()
{
    int a = 10;
    // Incr(a);
    cout << a << endl;
}