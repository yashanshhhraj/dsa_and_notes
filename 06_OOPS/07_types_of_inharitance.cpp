#include<iostream>
using namespace std;

// ? Single Level Inheritance
class Human {
    protected:
    string name;
    int age;

    public:
    Human() {};

    Human(string name, int age) {
        this -> name = name;
        this -> age = age;
    }

    void work() {
        cout << "I am working" << endl;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

class Student: public Human {
    int roll_number, fees;

    public:
    Student(string name, int age, int roll_number, int fees) : Human(name, age) {
        this -> roll_number = roll_number;
        this -> fees = fees;
    }

    void display() {
        cout << name << " " << age << " " << roll_number << " " << fees << endl;
    }
};

// ? Multilevel Inheritance
class Person {
    protected:
    string name;

    public:
    void introduce() {
        cout << "Hello my name is: " << name << endl;
    }
};

class Employee : public Person {
    protected:
    int salary;

    public:
    void monthlySalary() {
        cout << "My monthly salary is: " << salary << endl;
    }
};

class Manager: public Employee {
    protected:
    string department;
    
    public:
    Manager(string name, int salary, string department) {
        this -> name = name;
        this -> salary = salary;
        this -> department = department;
    }

    void work() {
        cout << "I am leading the department " << department << endl;
    }
};

// ? Multiple Inheritance
class Engineer {
    public:
    string specialization;

    Engineer() {
        cout << "Hello Engineer" << endl;
    }
    ~Engineer() {
        cout << "Hello Engineer Dest" << endl;
    }

    void work() {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Youtuber {
    public:
    int subscribers;

    Youtuber() {
        cout << "Hello Youtuber" << endl;
    }
    ~Youtuber() {
        cout << "Hello Youtuber Dest" << endl;
    }
    void contentCreator() {
        cout << "I have subscriber base of: " << subscribers << endl;
    }
};

class codeTeacher : public Engineer, public Youtuber {
    public:
    string name;

    codeTeacher() {
        cout << "Hello codeTeacher" << endl;
    }
    ~codeTeacher() {
        cout << "Hello codeTeacher Dest" << endl;
    }

    codeTeacher(string name, string specialization, int subscribers) {
        this -> name = name;
        this -> specialization = specialization;
        this -> subscribers = subscribers;
    }

    void showCase() {
        cout << "My name is this: " << name << endl;
        work();
        contentCreator();
    }
};

// ? Heirarchical Inheritance
class Teacher : public Human {
    int salary;

    public:
    Teacher(int salary, string name, int age) {
        this -> salary = salary;
        this -> name = name;
        this -> age = age;
    }

    void display() {
        cout << name << " " << age << " " << salary << endl;
    }
};

// ? Hybrid
class Scholar {
    public:
    void scholarPrint() {
        cout << "I am a Student" << endl;
    }
};

class Male {
    public:
    void malePrint() {
        cout << "I am Male" << endl;
    }
};

class Female {
    public:
    void femalePrint() {
        cout << "I am Female" << endl;
    }
};

class Boy : public Scholar, public Male {
    public:
    void boyPrint() {
        cout << "I am Boy" << endl;
    }
};

class Girl : public Scholar, public Female {
    public:
    void girlPrint() {
        cout << "I am Girl" << endl;
    }
};

int main() {
    // ? Single Level Inheritance
    // Student A1("Rohit", 26, 32, 99);
    // A1.display();

    // Accessing the work function inherited from Human class
    // A1.work();

    // ? Multilevel Inheritance
    // Manager A1("Yash", 200, "Finance");
    // A1.introduce(); // <-- From Person
    // A1.monthlySalary(); // <-- From Employee
    // A1.work(); // <-- From Manager

    // ? Multiple Inheritance
    // codeTeacher A1;
    // codeTeacher A1("Yash", "MTE", 2300);
    // A1.showCase();
    // A1.work();

    // ? Heirarchical Inheritance
    // Teacher A1(99, "Yash", 200);
    // A1.display();

    // ? Hybrid Inharitance
    Girl G1;
    G1.girlPrint(); // <-- From Girl
    G1.scholarPrint(); // <-- From Scholar
    G1.femalePrint(); // <-- From Female

    Boy B1;
    B1.malePrint(); // <-- From Male
}