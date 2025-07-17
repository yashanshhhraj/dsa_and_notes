#include<iostream>
using namespace std;

// ? class : User defined data type
class Student {
    public:
    string name;
    int age, roll_number;
    string grade;

    // ! Getters & Setters
    // ? Setters : Used to set values
    public:
    void setName(string s) {
        // Custom Validation
        if(s.size() == 0) {
            cout << "Invalid Name" << endl;
            return;
        }
        name = s;
    }

    void setAge(int a) {
        if(a < 0 || a > 100) {
            cout << "Invalid Age" << endl;
            return;
        }
        age = a;
    }

    void setRollNumber(int r) {
        roll_number = r;
    }

    void setGrade(string g) {
        grade = g;
    }

    // ? Getters : Used to get Values
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }

    // Returning Value
    int getRollNumber() {
        return roll_number;
    }

    string getGrade(int pin) {
        if(pin == 123)
        return grade;

        else {
            cout << "Password Din't Match" << endl;
            return " ";
        }
    }
};

class a {
    // ? 16 byte memory ==> 4 * 4
    // int b;
    // int c;
    // int d;
    // float e;

    // ? 8 byte memory ==> 2 for char b & c + 2 dead values + 4 for int
    // char b;
    // char c;
    // int d;

    // ? 8 byte memory ==> 3 for char b, c & d + 1 dead values + 4 for int
    // char b;
    // char c;
    // char e;
    // int d;
    
    // ? 12 byte memory ==> 2 for b & c then 2 byte for padding + 4 for int d + 1 for e then 3 byte for padding
    // char b;
    // char c;
    // int d;
    // char e;

    // ? 12 byte memory ==> 1 for b then 3 byte for padding + 4 for int k + 1 for c then 3 byte for padding
    // char b;
    // int d;
    // char c;

    // ? 16 byte memory ==> 2 for b & c then 2 byte for padding + 4 for int d + 8 for double f;
    char b;
    char c;
    int d;
    double f;

    // ? 24 byte memory ==> 1 for b then 3 byte for padding + 4 for int d + 1 for c then 7 byte for padding + 8 byte for f
    // char b;
    // int d;
    // char c;
    // double f;
};

int main() {
    // ? They can't be used untill access modfier is set to 'public'
    // Student s1;
    // s1.name = "Yashansh";
    // s1.age = 10;
    // s1.roll_number = 21;
    // s1.grade = "A+";
    
    // cout << s1.name << endl;
    
    // // ? Second Student
    // Student s2;
    // s2.name = "Purnima";
    // s2.age = 12;
    // s2.roll_number = 213;
    // s2.grade = "C+";

    // cout << s2.grade << endl;

    // Student s1;

    // ? Using Setters
    // s1.setName("Raman");
    // s1.setAge(23);
    // s1.setRollNumber(2341);
    // s1.setGrade("A+");
    
    // ? Using Getters
    // cout << s1.getName() << endl;
    // int r = s1.getRollNumber();
    // cout << r << endl;

    // cout << s1.getGrade(123);

    // a obj;
    // cout << sizeof(obj) << endl;

    // a onj;
    // cout << sizeof(onj) << endl;
    // cout << sizeof(a) << endl;

    // cout << "Address of obj :" << &obj << ", Address of onj: " << &onj; // BOth have different memory locations

    // ? Dynamic Memory Allocation to objects
    Student *s = new Student; // Allocating Memory in heap to an object

    (*s).name = "Rohit";
    s->age = 10; // -> signifies pointer
    (*s).roll_number = 43;
    (*s).grade = "D";

    // Accessing Values
    cout << s->name << endl;
}