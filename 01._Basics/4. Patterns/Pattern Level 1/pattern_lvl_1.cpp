#include <iostream>
using namespace std;

int main()
{
    // ? Printing 5 'stars' horizontally & vertically
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // for (int row = 0; row < 5; row++) {
    //     // cout << row+1 << ": ";
    //     for (int col = 0; col < 5; col++) {
    //         cout << '*' << ' ';
    //     }
    //     cout << endl;
    // }

    // ? Above is a 'Nested Loop' meaning 'Loop inside a Loop'

    // for (int i = 0; i < 5; i++) {
    //     cout << 1 << endl;
    // }

    // ? Printing 5 '10s' horizontally & 4 '10s' vertically
    // 10 10 10 10 10
    // 10 10 10 10 10
    // 10 10 10 10 10
    // 10 10 10 10 10

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         cout << 10 << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following pattern
    // 1 1 1 1 1
    // 2 2 2 2 2
    // 3 3 3 3 3
    // 4 4 4 4 4
    // 5 5 5 5 5

    // for (int row = 0; row < 5; row++) {
    //     for (int col = 0; col < 5; col++) {
    //         cout << row+1 << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // // ? Or
    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <= 5; col++) {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following pattern
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <= 5; col++) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing following pattern
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 5; col >= 1; col--) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing squares in ascending order
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25

    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <= 5; col++) {
    //         cout << col*col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing cubes in ascending order
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125
    // 1 8 27 64 125

    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <= 5; col++) {
    //         cout << col*col*col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing alphabets in ascending order in each row
    // a a a a a
    // b b b b b
    // c c c c c
    // d d d d d
    // e e e e e

    // ! Check
    // char a = 'a';
    // a += 8;
    // cout << a << endl;

    // ? Approach 1:
    // char default_name = 'a';
    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <= 5; col++) {
    //         cout << default_name << " ";
    //     }
    //     default_name += 1;
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = 1; row <= 5; row++) {
    //     char default_name = 'a' + (row - 1);
    //     for (int col = 1; col <= 5; col++) {
    //         cout << default_name << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing alphabets in alphabetical order in each row
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e

    // ? Approach 1:
    // for (int row = 1; row <= 5; row++) {
    //     char default_name = 'a';
    //     for (int col = 1; col <= 5; col++) {
    //         cout << default_name << " ";
    //         default_name = default_name + 1;
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    // for (int row = 1; row <= 5; row++) {
    //     for (char col = 'a'; col <= 'e'; col++) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // ? Approach 3:
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= 5; col++)
    //     {
    //         char name = 'a' + (col - 1);
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // todo: Check this in ChatGPT
    // for (int row = 1; row <= 5; row++)
    // {
    //     char name = 'a';
    //     for (int col = 1; col <= 5; col++)
    //     {
    //         cout << name + (col - 1) << " ";
    //     }
    //     cout << endl;
    // }

    // ? Printing numbers in Ascending Order
    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 20 21 22 23 24

    // ? Approach 1:
    // int count = 1;

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= 5; col++){
    //         cout << count << " ";
    //         count += 1;
    //     }
    //     cout << endl;
    // }

    // ? Approach 2:
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << ((row-1)*5) + col << " ";
        }
        cout << endl;
    }
}