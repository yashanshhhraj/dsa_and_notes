#include <iostream>

// Function to print Fibonacci series
void printFibonacci(int n)
{
    int first = 0, second = 1, next;

    std::cout << "Fibonacci Series up to " << n << " terms:" << std::endl;

    for (int i = 0; i < n; ++i)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }
}

int main()
{
    int terms;

    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> terms;

    printFibonacci(terms);

    return 0;
}
