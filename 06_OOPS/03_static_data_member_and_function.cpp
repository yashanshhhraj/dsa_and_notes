#include<iostream>
using namespace std;

class Customer {
    string name;
    int acc_no, balance;
    static int total_customer; // Attribute of classes or class member. Created when class is created.
    static int total_balance;
    
    public:
    Customer(string a, int b, int c) {
        name = a;
        acc_no = b;
        balance = c;
        total_customer++;
        total_balance += balance;
    }

    // Created through class
    static int getTotalCustomer() {
        return total_customer;
    }

    static int getTotalBalance() {
        return total_balance;
    }

    string getName() const{
        return name;
    }

    int getBalance() const{
        return balance;
    }

    int getAccNo() const{
        return acc_no;
    }

    void deposite(int amount) {
        if(amount > 0) {
            balance += amount;
            total_balance += amount;
            cout << name << " deposited " << amount << " in his bank account with account number " << acc_no << endl;
        }
        
        else cout << "Enter Amount greater than 0" << endl;
    }
    
    void withdraw(int amount) {
        if(amount > 0) {
            if(balance >= amount) {
                balance -= amount;
                total_balance -= amount;

                cout << name << " withdrawed " << amount << " from his bank account with account number " << acc_no << endl;
            }

            else cout << "Not Enough Balance" << endl;

        }
        else cout << "Enter Amount greater than 0 to withdraw" << endl;
    }

    // Created through Objects
    void displayTotal() const{
        cout << name << " -> " << "Total Customer: " << total_customer << endl;
    }
};

int Customer::total_customer = 0;

int Customer::total_balance = 0;

int main() {
    Customer A1("Yash", 2, 3000);
    Customer A2("Raj", 3, 4000);

    cout << "Total Customers: " << Customer::getTotalCustomer() << endl;
    
    // ? When static Member 'static int total_customer' in public;
    // Customer::total_customer = 5;
    // cout << "Total Customers: " << Customer::total_customer << endl; // ? Total Customers: 5
    
    // Accessing through class
    // A2.displayTotal();
    // A1.displayTotal();

    // ? Static Variable for total balance
    cout << "Total Balance: " << Customer::getTotalBalance() << endl;
    
    // Deposite amount
    A2.deposite(3244);

    cout << "Balance of " << A1.getName() << " : " << A1.getBalance() << " for account number: " << A1.getAccNo() << endl;
    
    A1.withdraw(324);
    cout << "Balance of " << A1.getName() << " : " << A1.getBalance() << " for account number: " << A1.getAccNo() << endl;

    cout << "Total Balance: " << Customer::getTotalBalance() << endl;
}