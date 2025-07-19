// ? Encapsulation : Encapsulation is the concept of hiding the internal details of how an object works and exposing only what is necessary via public methods.

#include <iostream>
using namespace std;

class BankAccount
{
private: // <-- Prevents Direct Access
    string accountHolder;
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    // Setter to set values
    void setAccountHolder(string name, int amount)
    {
        if (name != "" && amount > 0)
        {
            accountHolder = name;
            balance = amount;
        }

        else if (name == "")
            cout << "Empty name not allowed" << endl;

        else
            cout << "Enter a valid amount" << endl;
    }

    void deposite(int amount) {
        if(amount > 0) {
            balance += amount;
        }
    }

    void withdraw(int amount) {
        if(amount > 0 && balance >= amount) {
            balance -= amount;
        }
    }

    // Getter to Get values
    string getAccountHolder()
    {
        return accountHolder;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount acc;
    acc.setAccountHolder("Yashansh", 5000);

    // Not accesible directly
    // acc.balance = 45;

    cout << "Account Holder: " << acc.getAccountHolder() << ", Balance: " << acc.getBalance() << endl;
    
    acc.deposite(4500);
    cout << "Account Holder: " << acc.getAccountHolder() << ", Balance: " << acc.getBalance() << endl;
    
    acc.withdraw(5000);
    cout << "Account Holder: " << acc.getAccountHolder() << ", Balance: " << acc.getBalance() << endl;

    /*
    ! Abstraction : Abstraction means showing only the relevent information and hiding the implementation details

    ? Here, we have three functions named setAccountHolder(), deposite(), withdraw() which are serving different purposes for the users.

    ? But, users will only care about their purpose getting served through these functions, not the implementation of these functions, like how they are going to perform the task.

    ? That's abstraction, where only the relevent information is showed to the users and the rest of the details, information etc. are kept hidden from the user.
    */

    return 0;
}