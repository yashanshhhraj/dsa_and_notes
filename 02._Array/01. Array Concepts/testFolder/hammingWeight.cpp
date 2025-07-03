#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int ans = 0, rem;
    cout << "n : " << n << endl;

    while (n)
    {
        rem = n % 2;
        n /= 2;
        if (rem == 1)
        ans++;
    }

    return ans;
}

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    cout << "Hamming Weight of " << num << " is : " << hammingWeight(num) << endl;

    return 0;
}