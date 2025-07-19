#include<iostream>
using namespace std;

class Human {
    private:
    string child_count;

    protected:
    string name;
    int age, weight;

    public:
    int votes;

    void setHuman(string a, int b, int c) {
        name = a;
        age = b;
        weight = c;
    }

    void classDisplay() {
        cout << "Name: " << name << ", Age: " << age << ", Weight: " << weight << endl;
    }
};

class Student : public Human {
    int roll_number, fees;
    
    public:
    Student() {};
    Student(string a, int b, int c, int d, int e) {
        name = a;
        age = b;
        weight = c;
        roll_number = d;
        fees = e;
    }

    void studentDisplay() {
        // It can not access name as it is inaccesible due to private
        cout << "Age: " << age << " Weight: " << weight << ", Roll Number: " <<roll_number << ", Fees: "<< fees << endl;
    }
};

class Teacher : public Human {
    int salary, id;

    public:
    Teacher() {}

    Teacher(string n, int a, int b) {
        this -> name = n;
        this -> salary = a;
        this -> id = b;
    }
    void salaryUp(int a) {
        this -> salary = a;
    }

    void teacherdisplay() {
        cout << "Name: " << name << ", Salary: " << salary << ", Id: " << id << endl;
    }
};

/*
----------------------------------------------
Accessibility | External | Within | Derived  |
              |   Code   | Class  |  Class   |
----------------------------------------------
   public     |    Y     |   Y    |   Y      |
   protected  |    N     |   Y    |   Y      |
   private    |    N     |   N    |   N      |
----------------------------------------------
*/

int main() {
    Student A("Raman", 20, 40, 43, 2000);
    Student B;

    // A.name = "Yash"; // Not accessible as in private(Not accessible except withing the class) in parent class

    // A.age = 7; // Not accessible as in protected(Accessible withing the class & derived class only) in parent class
    
    // A.weight = 10; // Accessible from anywhere in the code because of public

    // A.setHuman("Yash", 10, 20);
    // A.classDisplay(); // Name: Yash, Age: 10 Weight: 20

    // If the inherited class is set private in derived class, then all its functions and variables are inaccessible.
    // A.setHuman("Yash", 10, 20); // inaccessible
    // A.classDisplay(); // Name: Yash, Age: 10 Weight: 20 // inaccessible

    
    A.studentDisplay(); // Age: 10 Weight: 20

    B.classDisplay(); // Name: , Age: 20, Weight: 34 as name not accessible to student
    B.votes = 90; // Weight is private property
    B.classDisplay(); // Name: , Age: 20, Weight: 34 as name not accessible to student

    Teacher T("Poonam", 30000, 453);
    T.teacherdisplay();
    T.salaryUp(40000);
    T.teacherdisplay();
}