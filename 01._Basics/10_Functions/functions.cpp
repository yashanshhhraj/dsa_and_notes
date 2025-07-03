#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    return 0;

    for(int i = 2; i < num; i++)
    {
        if (num % i == 0)
        return 0;
    }
    return 1;
}
void isPrimeVoid(int num)
{
    if (num <= 1)
    return ;

    for(int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number." << endl;
            return ;
        }
    }
    cout << num << " is a prime number." << endl;
}

unsigned long long factorialOfNumber(int fact = 4)
{
    unsigned long long ans = 1;
    for (int i = 1; i <= fact; i++)
    {
        ans *= i;
    }
    return ans;
}

// int sum(int a, int b, int c, int d) // ! Don't uncomment me
// int sum(int a, int b)
// {
//     return a + b;
// }

// ? Printing sum of a number with 'void()' function.
void sumVoid(int a, int b)
{
    cout << "Sum of " << a << " and " << b << " is : " << a + b << endl;
}

int mul(int a, int b)
{
    return a * b;
}

void Hello()
{
    cout << "Hello!, Brother." << endl;
}

int main() 
{
    // int num;
    // cout << "Enter the number to check for prime : ";
    // cin >> num;

    // if (isPrime(num))
    // cout << num << " is a prime number." << endl;

    // else
    // cout << num << " is not a prime number." << endl;

    // int fact, factorial;
    // cout << "Enter the number to find factorial of : ";
    // cin >> fact;

    // if (fact < 0)
    // {
    //         cout << "Factorial of negative number doesn't exists." << endl;
    //         factorial = (factorialOfNumber());
    //         cout << "Factorial is : " << factorial << " using default value."<< endl;
    // }

    // else
    // {
    //     factorial = (factorialOfNumber(fact));
    //     cout << "Factorial of " << fact << " is : " << factorial << endl;
    // }


    // int m, n;
    // cout << "--- Finding Sum of M & N ---" << endl;
    // cout << "Enter first number : ";
    // cin>> m;
    // cout << "Enter second number : ";
    // cin>> n;

    // cout << "Sum of " << m << " and " << n << " is : " << sum(m, n) << endl;
    // cout << "Multiplication of " << m << " and " << n << " is : " << mul(m, n) << endl << endl;

    // cout << "--- Finding Sum of O & P ---" << endl;
    // int o, p;
    // cout << "Enter first number : ";
    // cin>> o;
    // cout << "Enter second number : ";
    // cin>> p;

    // cout << "Sum of " << o << " and " << p << " is : " << sum(o, p) << endl;
    // cout << "Multiplication of " << o << " and " << p << " is : " << mul(o, p) << endl;

    // Hello();
    // sumVoid(5, 6); // ? Printed sum using 'void' type function sum()

    isPrimeVoid(3);
}