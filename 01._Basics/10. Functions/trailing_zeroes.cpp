#include <iostream>
using namespace std;
int trailingZeroes(int n) {
    int fact = 1, rem, ans = 0;

    for(int i; i <= n; i++)
    {
        fact += 1;
    }
    
    cout << "Factorial of " << n << " is " << fact << endl;

    while(fact)
    {
        rem = fact % 10;
        if(!rem)
        ans += 1;

        fact /= 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number to find trailing zero in in it's factorial: ";
    cin >> num;

    cout << trailingZeroes(num) << endl;
}