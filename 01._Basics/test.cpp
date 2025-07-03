#include <iostream>
using namespace std;

int trailingZeroes(int n) {
        int fact = 1, rem = 0, ans = 0;

        for(int i = 1; i <= n; i++)
        fact *= i;

        cout << "Factorial : " << fact << endl;

        while(!rem)
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
    cout << "Enter a number : ";
    cin >> num;

    cout << "Trailing Zeroes: " << trailingZeroes(num) << endl;
}