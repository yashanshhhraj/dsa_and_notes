#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(8);
    cout << "1. ";
    cout << d.front() << endl;
    cout << "2. ";
    cout << d.back() << endl;
    d.pop_back();

    if(!d.empty()) {
        cout << "3. ";
        cout << d.front() << endl;
        cout << "4. ";
        cout << d.back() << endl;
        d.pop_back();
    }
    
    else {
        cout << "Queue is Empty" << endl;
    }
}