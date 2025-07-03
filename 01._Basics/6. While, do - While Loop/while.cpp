#include <iostream>
using namespace std;

int main()
{
    // ! while Loop
    // ? For vs While
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << i << " ";
    //     i += 1;
    // }

    // ? Printing a Table with while loop
    // int i = 1;
    // int num;
    // cout << "Enter number to print table of : ";
    // cin >> num;

    // while (i <= 10)
    // {
    //     cout << num << " * " << i << " = " << num*i << endl;
    //     i++;
    // }

    // ? Printing factors of a number
    // int num;
    // cout << "Enter number to print table of : ";
    // cin >> num;
    // int i = 1;

    // cout << "Factors of : " << num << endl;
    // while (i <= num)
    // {
    //     if (num % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;
    // }

    // ? Checking for prime number using while loop
    // int num, i = 2;

    // cout << "Enter number to check for prime : ";
    // cin >> num;

    // if (num < 0)
    // {
    //     cout << "A prime number (or a prime) is a natural number greater than 1 that has no divisor other than 1 and itself" << endl;
    // }

    // else
    // {
    //     if (num == 1)
    //     {
    //         cout << num << " is not a prime number" << endl;
    //     }

    //     else if (num == 2)
    //     {
    //         cout << num << " is a prime number" << endl;
    //     }

    //     else
    //     {
    //         while (i < num)
    //         {
    //             if (num % i == 0)
    //             {
    //                 cout << num << " is a composite number" << endl;
    //                 return 0;
    //             }
    //             i++;
    //         }
    //         cout << num << " is a prime number" << endl;
    //     }
    // }

    // ! do - while Loop : Run for atleast one iteration, irrespective of the break condition
    // int num;
    // cout << "Enter number to print table of : ";
    // cin >> num;
    // int i = 1;

    // do {
    //     cout << num << " * " << i << " = " << num * i << endl;
    //     i++;
    // } while (i <= 30);

    // ? Sum of 'n' natural numbers using do-while loop
    int num;
    cout << "Enter number to print sum upto : ";
    cin >> num;
    int i = 1;
    int sum = 0;

    if (num < 0)
    {
        cout << num << " is not a natural number." << endl;
    }

    else
    {
        do
        {
            sum += i;
            i++;
        } while (i <= num);
        cout << "The sum of natural numbers upto " << num << " is : " << sum << endl;
    }
}