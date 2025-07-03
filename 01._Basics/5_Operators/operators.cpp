#include <iostream>
using namespace std;

int main()
{
    // cout << 13/3 << endl; // ? Prints 4
    // cout << 13.8/3 << endl; // ? Prints 4.6(float) as precedence of '13.8', i.e. 'float' is higher
    // cout << 13.8 * 3 << endl; // ? Prints 41.4(float) as precedence of '13.8', i.e. 'float' is higher

    // int a = 10;
    // cout << "Value of a before increment is : " <<a++ << endl; // ? Prints 10 (i.e. Older Value) and then is incremented
    // int b = a++; // ? Post increment : Use Value then increment
    // int b = ++a; // ? Pre increment : increment, then Use Value
    // int b = a--; // ? Post decrement : Use Value then decrement
    // int b = --a; // ? Pre decrement : decrement, then Use Value

    // cout<< "a = " << a << endl;
    // cout<< "b = " << b << endl;

    // ? '==' : Equality Check
    // int num1 = 4;
    // int num2 = 4;
    // cout << (num1==num2);

    // ? '>' : Greater than
    // int num1 = 6;
    // int num2 = 4;
    // cout << (num1>num2);

    // ? Solve left to right
    // cout << (5>4==1) << endl; // ? Returns 1
    // cout << (5>4>3) << endl; // ? Returns 0

    // ? '>' : Greater than or equal to
    // int num1 = 8;
    // int num2 = 4;
    // cout << (num1>=num2) << endl;
    // cout << (4>=4) << endl; // ? Returs 1

    // ! Similarly we have '<' i.e. less than and '<=' i.e. less than or eqaul to

    // ? '!=' : not equal to
    // cout << (1!=2) << endl; // ? Returns 1
    // cout << (1!=1) << endl; // ? Returns 0

    // ? Operator Precedence of Comparison Operators
    // {>, <, >=, <=} > {==, !=} : For same precedence operators, solve from left to right
    // cout << (5>4<3==2) << endl; // ? Returns 0
    // cout << (3>4>5!=1) << endl; // ? Returns 1

    // ? Logical Operatior
    // &&
    // cout << (2&&10)<<endl;  // ? 1
    // cout << (true&&false)<<endl; // ? 0

    // ||
    // cout << (2||10)<<endl; // ? 1
    // cout << (0||10)<<endl; // ? 1
    // cout << (0||0)<<endl; // ? 0
    // cout << (true||false)<<endl; // ? 1
    // cout << (false||false)<<endl; // ? 0

    // !
    // cout << (!2)<<endl; // ? 0
    // cout << (!0)<<endl; // ? 1
    // cout << (!true)<<endl; // ? 0

    // ? Checking if out of the three numbers, the first number is largest among other two.
    // int a, b, c;
    // a = 18;
    // b = 6;
    // c = 10;

    // if (a > b && a > c)
    // {
    //     cout << "Yes"<< endl;
    // }

    // else
    // {
    //     cout << "No" << endl;
    // }

    // ? Checking if the entered character is 'vowel' or 'consonent'
    // char name;
    // cout << "Enter an Alphabet : ";
    // cin >> name;

    // if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u' || name == 'A' || name == 'E' || name == 'I' || name == 'O' || name == 'U')
    // {
    //     cout << name << " is a Vowel";
    // }

    // else{
    //     cout << name << " is a Consonant";
    // }

    // ? Bitwise Operator
    // cout << (2 & 3) << endl; // ? 2
    // cout << (2 | 3) << endl; // ? 3
    // cout << (2 ^ 3) << endl; // ? 1
    // cout << (2 ^ 3) << endl; // ? 1
    // cout << (2 << 3) << endl; // ? '<<' - Bitwise Left Shift, 16
    // cout << (5 << 2) << endl; // ? '<<' - Bitwise Left Shift, 20
    // cout << (5 >> 2) << endl; // ? '>>' - Bitwise Right Shift, 1
    // cout << (6 >> 2) << endl; // ? '>>' - Bitwise Right Shift, 1
    // cout << (~5) << endl; // ? '~' - Bitwise Not Operator, -6
    // cout << (~-12) << endl; // ? '~' - Bitwise Not Operator, 11
}