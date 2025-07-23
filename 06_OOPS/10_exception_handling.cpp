/*
? Exception:
An exception is an unexpected situation (like division by zero, invalid input, file not found, etc.) that occurs during program execution and disrupts the normal flow of the program.
*/

/*
? 'try' BLock:
The try keyword represents a block of code that may throw an exception placed inside the try block. It's followed by one or more catch blocks. If an exception occurs, try block throws that exception.
*/

/*
? 'catch' Block:
The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.
*/

/*
? 'throw' Keyword
An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.
*/

#include<iostream>
#include<exception>
using namespace std;

class InvalidAmountError : public runtime_error {
    public:
    InvalidAmountError(const string &msg) : runtime_error(msg){};
};

class InsufficientBalanceError : public runtime_error {
    public:
    InsufficientBalanceError(const string &msg) : runtime_error(msg){};
};

class Customer {
    string name;
    int balance, account_number;

    public:
    Customer(string name, int balance, int account_number) {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposite
    void deposite(int amount) {
        if (amount < 0) {
            throw InvalidAmountError("Amount should be Greater than 0"); // <-- Calls constructor of the InvalidAMountError class
            // throw runtime_error("Amount should be Greater than 0"); // <-- Calls constructor of the runtime error class
            // runtime_error("Amount should be Greater than 0"); Creates an object of type runtime_error automatically which is later displayed with e.what().
        }

        balance += amount;
        cout << amount << " Rs. Credited Successfully" << endl;
    }

    // Withdraw
    void withdraw(int amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " Rs. Debited Successfully" << endl;
        }

        else if(amount < 0) {
            throw InvalidAmountError("Amount Entered is 0. Shoult be Greater than 0");
        }

        else {
            throw InsufficientBalanceError("Your account has Low Balance");
        }
    }

    void displayDetails() {
        cout << "Name of Account Holder: " << name << ", Balance: " << balance << ", Account Number: " << account_number << endl;
    }

    void showBalance() {
        cout << "Your balance is " << balance << " Rs." << endl;
    }
};

// ? How exception class may be looking
// class exception {
//     protected:
//     string msg;

//     exception(string msg) {
//         this->msg = msg;
//     }

//     string what() {
//         return msg;
//     }
// };

// // simulating runtime_error class
// class runtime_error : public exception {
//     public:
//     runtime_error(const string &msg) : exception(msg);
// }

int main() {
    Customer C1("Yash", 5000, 4355432);
    
    try {
        C1.deposite(100); // Exception Occured: Amount should be Greater than 0
        C1.withdraw(564);
        C1.withdraw(5564);
        C1.showBalance();
    } 
    
    catch(const InvalidAmountError &e) {
        cout << "Exception Occured: " << e.what() << endl;
    }

    catch(const InsufficientBalanceError &e) {
        cout << "Exception Occured: " << e.what() << endl;
    }

    catch(...) { // <-- Default Catch Block
        cout << "Exception Occured" << endl;
    }

    C1.displayDetails();

    // ? With integer 0perations
    // int a, b;

    // cout << "Enter Value of a & b: ";
    // cin >> a >> b;
    
    // Division by 0 possible
    // if(b == 0) {
    //     cout << "Division by 0 not possible" << endl;
    //     return 0;
    // }

    // With try...catch

    // try {
    //     if (b == 0) throw "Division by 0 not possible";

    //     int c = a / b;
    //     cout << c << endl;
    // }
    // catch(const char * e) {
    //     cout << "Exception Occured: " << e << endl;
    // }

    // Need of try...catch
    // try {
    //     size_t size = 2000000000;
    //     int *p = new int[size];
    //     cout << "Memory Allocation is Successfull";
    //     delete[] p;
    // }
    // catch(const bad_alloc &e) {
    //     cout << "Exception Occured due to line 107: " << e.what() << endl;
    // }
}