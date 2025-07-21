#include<iostream>
#include<vector>
using namespace std;

// ? Function Ovrloading
class Area {
    public:
    int calculateArea(int r) {
        return 3.14 * r * r;
    }
    
    int calculateArea(int l, int b) {
        return l * b;
    }
};

// ? Operator Overloading
class Complex {
    int real, img;

    public:
    Complex() {};

    Complex(int real, int img) {
        this -> real = real;
        this -> img = img;
    }

    void display() {
        cout << real << "+i" << img << endl;
    }

    Complex operator + (Complex &C) {
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;

        return ans;

        // Can work without default constructor
        // return Complex(real + C.real, img + C.img);
    }
};

// ? Virtual Functions
class Animal {
    public:
    virtual void speak() {
        cout << "Hu Hu" << endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout << "Bark" << endl;
    }

    void roti() {
        cout << "I am eating a roti" << endl;
    }
};

class Cat : public Animal {
    public:
    void speak() {
        cout << "Meoww" << endl;
    }

    void roti() {
        cout << "I am eating a roti" << endl;
    }
};

int main() {
    // ? Function Ovrloading
    // Area A1;
    // cout << A1.calculateArea(4) << endl;
    // cout << A1.calculateArea(8, 7) << endl;

    // ? Operator Overloading
    // Complex C1(3, 4);
    // Complex C2(4, 6);

    // Complex C3 = C1 + C2;
    // C3.display();

    // ? Virtual Functions
    // Animal* A = new Dog();
    // A -> speak();
    // // A -> roti();

    // Dog *D = new Dog();
    // D -> roti();

    // Animal *p;
    vector<Animal*> animals; // <- Pointer to parent class can store the address of the objects of child class
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Cat());
    animals.push_back(new Dog());

    // ? Printing their voices
    for(int i = 0; i < animals.size(); i++) {
        animals[i]->speak();
    }
}