#include <iostream>
using namespace std;

int main()
{
    // ? Printing following Pattern
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // ? Approach 1:
    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <=row; col++) {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // ? Approach 1:
    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <=row; col++) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // ? Approach 1:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // ? Approach 1:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // a
    // b b
    // c c c
    // d d d d
    // e e e e e

    // ? Approach 1:
    // for (int row = 1; row <= 5; row++)
    // {
    //     char name = 'a' + (row - 1);
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 1: With some changes
    // for (int row = 0; row <= 4; row++)
    // {
    //     char name = 'a'+ (row);
    //     for (int col = row; col >= 0; col--)
    //     {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = 1; row <= 5; row++)
    // {
    //     char name = 'a' + (row - 1);
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following Pattern
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // ? Approach 1:
    // for (int row = 5; row >= 1; row--)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = row; col <= 5; col++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 3:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= (5 - (row - 1)); col++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following pattern
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // ? Approach 1:
    // for (int row = 5; row >= 1; row--)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << ' ';
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= (5 - (row - 1)); col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following pattern
    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    // ? Approach 1:
    // for (int row = 5; row >= 1; row--)
    // {
    //     for (int col = 5; col >= row; col--)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 5; col >= 5 - (row - 1); col--)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
}