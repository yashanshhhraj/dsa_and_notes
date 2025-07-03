#include <iostream>
using namespace std;

int main()
{
    // cout << num << endl; // ? Error : 6:13: error: 'num' was not declared in this scope
    int num = 10; // ? Error : 'int num' previously declared here
    cout << "'num' outside if : " << num << endl;
    // int num;  // ? Error : 7:9: note: 'int num' previously declared here

    if (num == 10)
    {
        int num = 20;
        cout << "'num' inside if : " << num << endl;
        // int num = 50; // ? Error: 13:13: note: 'int num' previously declared here
    }

    cout << "previously declared : 'num' outside if : " <<  num << endl;
}