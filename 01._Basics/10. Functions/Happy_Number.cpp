#include <iostream>
using namespace std;

bool isHappy(int n) {
    int rem, pow = 2;

    while (n != 1)
    {
        if (n <= 9)
        return false;

        int ans = 0;

        while(n)
        {
            rem = n % 10;
            n /= 10;
            ans += rem*pow;
            cout << ans << endl;
        }
        n = ans;
    }

    if (n = 1)
    return true;

    else
    return false;
}

int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;

    cout << "Answer : "<< isHappy(num);
}