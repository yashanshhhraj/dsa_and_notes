#include <iostream>
using namespace std;

int main()
{
    // ? Printing following Pattern
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //         Printing Space
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    // Printing *
    //     // ? Choose Either of the way
    //     // for (int col = 1; col <= ((2 * row ) - 1); col++)
    //     for (int col = 1; col <= (row + (row - 1)); col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // ? Printing following Pattern
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col =1; col <= (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }

    //     for(int col = (row - 1); col >= 1; col--)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // ? Approach 1:
    // for (int row = 1; row <= n; row++)
    // {
    //     // Printing Space
    //     for (int col = 1; col <= (row-1); col++)
    //     {
    //         cout << "  ";
    //     }

    // // ?     for (int col = 1; col <= (((2 * n) - 1) - (2 * (row - 1))); col++): The loop below is derived from this
    //     for (int col = 1; col <= (2 * (n - row) + 1); col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = n; row >= 1; row--)
    // {
    //     // Printing Space
    //     // ? for (int col = 1; col <= (((2 * n) - 1) - ((2 * row) - 1))/2; col++): The loop below is derived from this
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Printing *
    //     for (int col = 1; col <= ((2 * row) - 1); col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // *  *  *  *  *  *  *  *
    // *  *  *        *  *  *
    // *  *              *  *
    // *                    *
    // *                    *
    // *  *              *  *
    // *  *  *        *  *  *
    // *  *  *  *  *  *  *  *

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     // Printing Stars (Upper-Left-Half)
    //     for (int col = 1; col <= n - (row - 1); col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Printing space in-between
    //     for (int col = 1; col <= 2 * (row - 1); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Printing Stars (Upper-Right-Half)
    //     for (int col = 1; col <= n - (row - 1); col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // for (int row = 1; row <= n; row++)
    // {
    //     // Printing Stars (Lower-Left-Half)
    //     for (int col = 1; col <= (row); col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Printing space in-between
    //     for (int col = 1; col <= 2 * (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Printing Stars (Lower-Right-Half)
    //     for (int col = 1; col <= (row); col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int row = n; row >= 1; row--)
    // {
    //     // Printing Star (Upper-Left-Half)
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Printing Space
    //     for (int col = 1; col <= 2 * (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Printing Star (Upper-Right-Half)
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // for (int row = 1; row <= n; row++)
    // {
    //     // Printing Star (Upper-Left-Half)
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Printing Space
    //     for (int col = 1; col <= 2 * (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Printing Star (Upper-Right-Half)
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // ? Printing following Pattern
    // *                    *
    // *  *              *  *
    // *  *  *        *  *  *
    // *  *  *  *  *  *  *  *
    // *  *  *        *  *  *
    // *  *              *  *
    // *                    *

    // int n;
    // cout << "Enter the number of rows to print: ";
    // cin >> n;

    // // ? Printing First Part
    // for (int row = 1; row <= n; row++)
    // {
    //     // Print '*'
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Print 'Space'
    //     for (int col = 1; col <= 2 * (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Print '*'
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // ? Printing Second Part : Approach 1
    // for (int row = 1; row <= (n - 1); row++)
    // {
    //     // Print '*'
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Print 'Space'
    //     for (int col = 1; col <= 2 * row; col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Print '*'
    //     for (int col = 1; col <= (n - row); col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // // ? Printing Second Part : Approach 2
    // for (int row = (n - 1); row >= 1; row--)
    // {
    //     // Print '*'
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     // Print 'Space'
    //     for (int col = 1; col <= 2 * (n - row); col++)
    //     {
    //         cout << "  ";
    //     }

    //     // Print '*'
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    //    *
    //   * *
    //  * * *
    // * * * *
    // * * * *
    //  * * *
    //   * *
    //    *

    int n;
    cout << "Enter the number of rows to print: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // Print Space
        for (int col = 1; col <= (n - row); col++)
        {
            cout << "  ";
        }

        // Print Star
        for (int col = 1; col <= row; col++)
        {
            cout << "*   ";
        }
        cout << endl;
    }

    for (int row = n; row >= 1; row--)
    {
        // Print Space
        for (int col = 1; col <= (n - row); col++)
        {
            cout << "  ";
        }

        // Print Star
        for (int col = 1; col <= row; col++)
        {
            cout << "*   ";
        }
        cout << endl;
    }
}