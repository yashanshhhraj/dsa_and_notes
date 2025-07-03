#include <iostream>
using namespace std;

void a_to_A(char ch)
{
    // ? Approach 1
    // ch -= 32;
    // cout << ch << endl;

    // ? Approach 2
    char ans = ch - 'a' + 'A';
    cout << ans << endl;
}

int main()
{
    char character; 
    cout << "Enter the character to capatalise : ";
    cin >> character;

    if (!islower(character))
    {
        cout << "Invalid Character!, Only small letters are allowed." << endl;
        return 0;
    }

    a_to_A(character);
}
