#include<iostream>
using namespace std;

class Customer {
    string name;
    int account_no;
    int balance;
    
    public:
    // ? Constructors are automatically called when
    // Default Constructor : With Default Values
    Customer() {
        name = "Yashu";
        account_no = 1;
        balance = 100;
    }

    // Parameterized Contructor : Uses parameter to initialize values
    // Customer(string a, int b, int c) {
    //     name = a;
    //     account_no = b;
    //     balance = c;
    // }

    // ? 'this' Keyword : Stores the address of the object which invoked the constructor
    // Customer(string name, int account_no, int balance) {
    //     this -> name = name;
    //     this -> account_no = account_no;
    //     this -> balance = balance;
    // }

    // ? Inline Constructor
    Customer(string a, int b, int c): name(a), account_no(b), balance(c){}

    // This concept of creating multiple constructors for different use cases based on parmaters is call "Construtor Overloading".
    Customer(string a, int b) {
        name = a;
        account_no = b;
        balance = 9;
    }

    // ? Copy Constructor
    Customer(Customer &B) {
        name = B.name;
        account_no = B.account_no;
        balance = B.balance;
    }


    void display() {
        cout << "Name: " << name << ", Account Number: " << account_no << ", Balance: " << balance << endl;
    }
};

class Bank {
    string name;
    int *data;

    public:
    // Constructor
    Bank() {
        name = "Yash";
        data = new int;
        *data = 57;
        cout << "Constructor is Called" << endl;
    }

    // Destructor : Called at last before the object is destroyed to release the dynamic memory, close opened files etc.
    ~Bank() {
        delete data; // Releasing Memory
        cout << "Destructor is Called" << endl;
    }
};

class Calling {
    string name;
    int *data;

    public:
    Calling() {
        name = "4";
        cout << "Constructor for " << name << endl;
    }

    Calling(string name) {
        this -> name = name;
        cout << "Constructor for " << name << endl;
    }

    ~Calling() {
        cout << "Destructor for " << name << endl;
    }
};

int main() {
    // ? Constructor Part
    // Customer C1;
    // Customer C2("Yash2", 420, 32445675);
    // Customer C3("Mohit", 25);
    // cout<< "For C1: ";
    // C1.display();
    // cout<< "For C2: ";
    // C2.display();
    // cout<< "For C3: ";
    // C3.display();
    
    // Customer A1(C2);
    // cout<< "For A1: ";
    // A1.display();
    
    // // With Assignment Operator
    // Customer A2;
    // A2 = C1;
    // cout<< "For A2: ";
    // A2.display();

    // ? Destructor Part
    // Bank A1;

    // ? Calling order : Constructor function are called in the order the Objects are created. But, destructor are called in reverse due to the LIFO structure of the stack, where the last entered Object releases memory first due to stack implementation.
    Calling A1("1"), A2("2"), A3("3");

    // Dynamic Memory Alocation to objects
    Calling *A4 = new Calling;

    // Destructor for A4 would not run untill the dynamically allocated memory is released.
    delete A4;
}