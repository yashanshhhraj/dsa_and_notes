#include <iostream>
using namespace std;

int main()
{
    int num, rem, sum, tempNum;
    // int sum_1 = 0, rem_2, temp_sum;

    cout << "Enter number to find sum of digits: ";
    cin >> num;

    tempNum = num;
    while (tempNum / 10)
    {
        sum = 0;
        while (tempNum)
        {
            rem = tempNum % 10;
            sum += rem;
            tempNum /= 10;
        }
        tempNum = sum;
    }
    // cout << "Sum = " << sum << endl;

    // while (tempNum)
    // {
    //     rem = tempNum % 10;
    //     sum += rem;
    //     tempNum /= 10;
    // }
    // cout << "Sum = " << sum << endl;

    // if (sum / 10)
    // 
    //     temp_sum = sum;
    //     while (temp_sum)
    //     {
    //         rem_2 = temp_sum % 10;
    //         sum_1 += rem_2;
    //         temp_sum /= 10;
    //     }
    //     sum = sum_1;
    //     cout << sum << endl;
    // }

    cout << "Sum of digits of " << num << " is " << sum << endl;
}