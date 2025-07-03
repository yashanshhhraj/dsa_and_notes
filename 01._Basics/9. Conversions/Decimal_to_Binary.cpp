#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int decimal, i, count = 0, tempDecimal, ans, remainderTempDecimal, binaryNumber = 0, quotient, power_of_10=1;
    cout << "Enter number to print binary of : ";
    cin >> decimal;

    // tempDecimal = decimal;
    // while (tempDecimal != 0) 
    // {
    //     tempDecimal = tempDecimal/2;
    //     count = count + 1;
    // }

    cout << decimal << endl;
    cout << count << endl;

    quotient = decimal;
    // for (i = 1; i <= count; i++){
    //     cout << "quotient = " << quotient << endl;
    //     remainderTempDecimal = quotient % 2;
    //     cout << "remainderTempDecimal""==" << remainderTempDecimal << endl;
    //     binaryNumber = binaryNumber + (remainderTempDecimal * power_of_10);
    //     power_of_10 *= 10;
    //     quotient = quotient/2;
    // }

    while (quotient != 0) {
        remainderTempDecimal = quotient % 2;
        binaryNumber = binaryNumber + (remainderTempDecimal * power_of_10);
        power_of_10 *= 10;
        quotient = quotient/2;
    }

    cout<< "Binary of " << decimal << " is : " << binaryNumber << endl;
}