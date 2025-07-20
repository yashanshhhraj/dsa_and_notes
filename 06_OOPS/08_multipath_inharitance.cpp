#include<iostream>
using namespace std;

// ? Multipathf Inheritance
class Human {
    protected:
    string name;

    public:
    void display() {
        cout << "My name is: " << name << endl;
    }
};

class Engineer : public virtual Human {
    public:
    string specialization;

    void work() {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Youtuber : public virtual Human {
    public:
    int subscribers;

    void contentCreator() {
        cout << "I have subscriber base of: " << subscribers << endl;
    }
};

class codeTeacher : public Engineer, public Youtuber {
    public:
    int salary;

    codeTeacher(string name, string specialization, int subscribers, int salary) {
        this -> name = name;
        this -> specialization = specialization;
        this -> subscribers = subscribers;
        this -> salary = salary;
    }
};
int main() {
    // ? Multipath Inharitance
    codeTeacher C1("Yash", "MTE", 2300, 49);
    // codeTeacher C1;
    C1.display();
}