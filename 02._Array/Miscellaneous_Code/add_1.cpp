#include <iostream>
using namespace std;

int main()
{
    int digits[4] = {9};
    int n = sizeof(digits) / sizeof(digits[0]);

    int mul = 1, num = 0, rem;
    for(int i = n - 1; i >= 0; i--)
    {
        num += (digits[i] * mul);
        mul *= 10;
    }

    cout << "Num 1 : " << num << endl;

    num = num + 1;
    cout << "Num 2 : " << num << endl;

    for(int i = n - 1; i >= 0; i--)
    {
        rem = num % 10;
        digits[i] = rem;
        num /= 10;
    }

    for(int i =  0; i < n; i++)
    cout << digits[i] << " ";
}