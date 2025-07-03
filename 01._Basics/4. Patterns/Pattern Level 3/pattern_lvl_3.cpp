#include <iostream>
using namespace std;

int main()
{
    // ? Printing following Pattern
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "  ";

    //         // ? Alternatively
    //         // string space = "  ";
    //         // cout << space;
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    //         1
    //       2 2
    //     3 3 3
    //   4 4 4 4

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
    // 1 2 3 4 5

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    //         A
    //       A B
    //     A B C
    //   A B C D
    // A B C D E

    // ? Approach 1:
    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (n-row); col++){
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++) {
    //         char word = 'A' + (col - 1);
    //         cout << word << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (n-row); col++){
    //         cout << "  ";
    //     }

    //     for (char word = 'A'; word <= 'A' + (row - 1); word++) {
    //         cout << word << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    //         1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1

    // ? Approach 1:
    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = row; col >= 1; col--) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
}