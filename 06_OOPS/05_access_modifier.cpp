#include<iostream>
using namespace std;

class Human {
    private:
    int a;

    protected:
    int b;
    // We can access any variable withing the class irrespective of the access modifier
    void fun() {
        a = 10;
        b = 20;
        c = 30;
    }

    public:
    int c;

};

int main() {
    Human Yash;

    // ? a & b are not accessible in external code as they are private & protected respectively.
    // Yash.a = 10;
    // Yash.b = 20;
    Yash.c = 10;
}