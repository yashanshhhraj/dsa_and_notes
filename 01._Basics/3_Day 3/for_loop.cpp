#include <iostream>
using namespace std;

int main()
{
    // ? Printing a given text for a number of times.
    // for (int i = 6; i <= 10; i++)
    // {
    //     cout << i << ". Hello World?" << endl;
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i << ". Coder Army" << endl;
    // }

    // ? Printing the integer upto a given number.
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i << endl;
    // }

    // ? Printing the square of a number upto a given number.
    // int sqr;
    // cout << "Enter the number to print square upto: ";
    // cin >> sqr;

    // for (int i = 1; i <= sqr; i++)
    // {
    //     // cout << "The square of " << i << " is: " << i * i << endl;
    //     cout << i << "'s square is " << i * i << endl;
    // }

    // ? Printing n natural number.
    // int natural;
    // cout << "Enter the natural number to print upto: ";
    // cin >> natural;

    // for (int i = 1; i <= natural; i++)
    // {
    //     cout << i << endl;
    // }

    // ? Printing all the even number upto n.
    // int allEven;
    // cout << "Enter the number to print even number upto: ";
    // cin >> allEven;
    // int count = 1;

    // // if (allEven < 0)
    // // {
    // //     for (int i = 0; i >= allEven; i = i - 2)
    // //     {
    // //         cout << count << ". " << i << endl;
    // //         count++;
    // //     }
    // // }

    // // else
    // // {
    // //     for (int i = 0; i <= allEven; i = i + 2)
    // //     {
    // //         cout << count << ". " << i << endl;
    // //         count++;
    // //     }
    // // }

    // for (int i = 2; i <= allEven; i = i + 2)
    // {
    //     cout << count << ". " << i << endl;
    //     count++;
    // }

    // int pattern;
    // cout << "Enter the number to print pattern upto: ";
    // cin >> pattern;

    // for (int i = 1; i <= pattern; i = i + 4)
    // {
    //     cout << i << " _ ";
    // }

    // int initial;
    // int gap;
    // int count;

    // cout << "Enter the intial value: ";
    // cin >> initial;

    // cout << "Enter the number of value to be printed next: ";
    // cin >> count;

    // cout << "Enter the gap between each value: ";
    // cin >> gap;

    // cout << initial;
    // for (int i = 1; i <= count; i = i + 1)
    // {
    //     initial = initial + gap;
    //     cout << ", " << initial;
    // }

    // int num;
    // cout << "Enter Number: ";
    // cin >> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 2 == 1)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // ? For loop can be initialised outside its scope.
    int i = 20; // ? Initialisation of i for the 'for loop' outside its scope

    for (; i <= 30; i++)
    {
        cout << i << " ";
    }

    // ! For loop in advance
    // ? Print number from 101 to 200
    // for (int i = 100; i <= 200; i++)
    // {
    //     cout << i << endl;
    // }

    // ? Print alphabet from 'a' to 'z'
    // char alphabet;

    // for (int i = 97; i <= 122; i++)
    // {
    //     alphabet = i;
    //     cout << alphabet << ", ";
    // }

    // for (char alphabet2 = 'a'; alphabet2 <= 'z'; alphabet2++)
    // {
    //     cout << alphabet2 << ", ";
    // }

    // char name = 'a';
    // int i = name + 1;
    // cout << i << endl;

    // ? Printing number in reverse order
    // int init;
    // int fin;

    // cout << "Enter the number to start with (must be greater than the final number): ";
    // cin >> init;
    // cout << "Enter the number to end with (must be lesser than the final number): ";
    // cin >> fin;

    // if (init >= fin)
    // {
    //     for (int i = init; i >= fin; i--)
    //     {
    //         cout << i << endl;
    //     }
    // }
    // else
    // {
    //     cout << endl
    //          << "* * * \nInvalid Choice of constraints Remember, to be printed in reverse order.\n* * *" << endl
    //          << endl;

    // ? Printing number from 1 to n with a gap of 3 in between them numbers
    // int n;
    // cout << "Enter the value to print the number upto with a gap of 3: ";
    // cin >> n;

    // for (int i = 1; i < n; i = i + 3)
    // {
    //     cout << i << endl;
    // }

    // ? Printing the Arithmatic Progression series
    // int start;
    // int end;
    // int gap;

    // cout << "Enter the first value of AP: ";
    // cin >> start;
    // cout << "Enter the number of terms needed of AP: ";
    // cin >> end;
    // cout << "Enter the gap: ";
    // cin >> gap;

    // for (int i = 1; i <= end + 1; i++)
    // {
    //     cout << "a" << i << ". " << start + ((i - 1) * gap) << endl;
    // }

    // ? 1. Printing the Table of a number
    // int table;
    // cout << "Enter the number to print table of: ";
    // cin >> table;

    // cout << "Table of " << table << "--->>" << endl;
    // for (int i = 1; i <= 12; i++)
    // {
    //     cout << table << " * " << i << " = " << table * i << endl;
    // }

    // ? 2. Printing the Table of a number
    // int table;
    // cout << "Enter the number to print table of: ";
    // cin >> table;

    // cout << "Table of " << table << "--->>" << endl;
    // for (int i = table; i <= table * 12; i = i + table)
    // {
    //     cout << i << endl;
    // }

    // ? 1. Calculating the power of a number
    // int num_power, power, answer;

    // cout << "Enter number to find power of: ";
    // cin >> num_power;

    // cout << "Enter the power to which the number is raised: ";
    // cin >> power;

    // answer = 1;
    // for (int i = 1; i <= power; i++)
    // {
    //     answer = answer * num_power;
    // }

    // cout << answer;

    // ? 2. Calculating the power of a number
    //     int num_power, power, i, num;

    //     cout << "Enter number to find power of: ";
    //     cin >> num_power;

    //     cout << "Enter the power to which the number is raised: ";
    //     cin >> power;

    //     num = num_power;

    //     for (int i = 1; i < power; i++)
    //     {
    //         num = num * num_power;
    //     }

    //     cout << num << endl;

    // ? 1. Finding the sum of number from 'a' to 'b'
    // int i, snum, ennum, store;
    // cout << "Enter the number to start with: ";
    // cin >> snum;
    // cout << "Enter the number to find sum upto: ";
    // cin >> ennum;

    // store = 0;
    // for (i = snum; i <= ennum; i++)
    // {
    //     store = store + i;
    // }

    // cout << store << endl;

    // ? 2. Finding the sum of n natural number
    // int my_num, sum;
    // cout << "Enter the number to find sum upto: ";
    // cin >> my_num;

    // sum = 0;
    // for (int i = 1; i <= my_num; i++)
    // {
    //     sum = sum + (i * i);
    // }

    // cout << sum << endl;

    // ? 3. Finding the sum of n natural number
    // int my_num, sum;
    // cout << "Enter the number to find sum upto: ";
    // cin >> my_num;

    // sum = (my_num * (my_num + 1)) / 2;

    // cout << sum << endl;

    // ? 4. Finding the sum of square of n natural number
    // int my_num, sum;
    // cout << "Enter the number to find sum of square upto: ";
    // cin >> my_num;

    // sum = 0;
    // for (int i = 1; i <= my_num; i++)
    // {
    //     sum = sum + (i * i);
    // }

    // cout << sum << endl;

    // ? Printing the factorial of a number
    // int my_fact, mul;
    // cout << "Enter the number to find factorial of: ";
    // cin >> my_fact;

    // mul = 1;
    // for (int i = 1; i <= my_fact; i++)
    // {
    //     mul = mul * i;
    // }

    // cout << mul << endl; // The value of factorial may be printed as '0' for larger numbes. This is due to the fact that the memory assigned to the variable for the storage is insufficient to store the value. Try 'double' or similar datatype to get more efficient result.

    // ? Check whether the number is prime or not
    // int prime, i, pseudo, result;
    // cout << "Enter the number: ";
    // cin >> prime;
    // pseudo = prime;

    // if (prime < 2)
    // {
    //     cout << prime << " is not a prime number." << endl;
    //     return 0;
    // }

    // else
    // {
    //     for (i = 2; i < prime; i++)
    //     {
    //         if (prime % i == 0)
    //         {
    //             cout << prime << " is not a prime number." << endl;
    //             return 0;
    //         }
    //     }
    //     cout << prime << " is a prime number." << endl;
    // }

    // cout << "Ended" << endl;

    // ? Printing the fibonacci series upto nth term
    // int a1 = 0, a2 = 1, an, i, nth;
    // cout << "Enter the no of term to print: ";
    // cin >> an;

    // if (an == 1)
    // {
    //     cout << a1;
    // }

    // else
    // {
    //     cout << a1 << ", " << a2;
    // }

    // for (i = 3; i <= an; i++)
    // {
    //     nth = a1 + a2;
    //     cout << ", " << nth;
    //     a1 = a2;
    //     a2 = nth;
    // }

    // ? Printing the nth term of fibonacci series
    // int a1 = 0, a2 = 1, an, i, nth;
    // cout << "Enter the term to print: ";
    // cin >> an;

    // if (an == 1)
    // {
    //     cout << a1;
    // }

    // else if (an == 2)
    // {
    //     cout << a2;
    // }

    // else
    // {
    //     for (i = 2; i < an; i++)
    //     {
    //         nth = a1 + a2;
    //         a1 = a2;
    //         a2 = nth;
    //     }
    //     cout << nth << endl;
    // }

    // ? Printing the
    // int num;
    // cout << "Enter the number to print table of: ";
    // cin >> num;

    // int num_a = 0;
    // for (int i = 1; i <= 12; i++) {
    //     num_a += num;
    //     cout << num << " * " << i << " = " << num_a;
    //     cout << endl;
    // }
}