#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
    int age;
    string name;

    // ?Operator Overloading
    // 1. < is just syntactic sugar for calling your operator< function.
    // 2. The 'left' object becomes this inside the function.

    // 3. The right object is passed as the argument.

    // Sorting on the basis of age ('<' is used to compare. Using '>' gives error)
    bool operator < (const Person &other) const {
        return age > other.age;
    }
};

// They can be implemented with Red-Black or AVL Tree

int main() {
    // ? Stores the value in ascending order
    // set<int> s;

    // ? Stores the value in reverse order
    // set<int, greater<int>> s;

    // ? Insertion
    // s.insert(10);
    // s.insert(20);
    // s.insert(110);
    // s.insert(200);
    // s.insert(10);
    // s.insert(20);
    // s.insert(110);
    // s.insert(210);

    // ? Deletion
    // s.erase(110);

    // ? Printing values
    // Iterating in forward order
    // for(auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << endl;
    // }

    // Iterating in reverse order
    // for(auto it = s.rbegin(); it != s.rend(); it++) {
    //     cout << *it << endl;
    // }

    // ? Searching the element
    // With find
    // s.find(200) --> Returns iterator to that value if element is present. Otherwise it returns 's.end()'
    // if(s.find(200) != s.end())
    // cout << "Present" << endl;
    // else
    // cout << "Absent" << endl;

    // s.find(40) != s.end() ? cout << "Present" << endl : cout << "Absent" << endl;

    // cout << (s.find(40) != s.end() ?"Present":"Absent") << endl;

    // With count : Returns number of appearances of element in set ('0' (int) is considered as false)
    // if(s.count(2100))
    // cout << "Present" << endl;
    // else    
    // cout << "Absent" << endl;

    // ? Storing class objects in set
    // set<Person> s;

    // Person p1, p2, p3;

    // p1.age = 10, p1.name = "Rohit";
    // p2.age = 30, p2.name = "Mohit";
    // p3.age = 140, p3.name = "Sohit";

    // s.insert(p1);
    // s.insert(p2);
    // s.insert(p3);

    // for(auto it = s.begin(); it != s.end(); it++)
    // cout << (*it).name << " " << (*it).age << endl;

    // cout << it -> name << " " << it -> .age << endl;

    // ! Multiset : Allows duplicate elements, but stores them in sorted order
    multiset<int> s;

    // Insertion
    s.insert(10);
    s.insert(34);
    s.insert(3);
    s.insert(10453);
    s.insert(107);
    s.insert(1009);
    s.insert(10);

    // Iteration
    for(auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << endl;

    // Removes all elements with that key.
    // Returns the number of elements removed (as size_t).
    int count = s.erase(10);
    cout << count << endl;

    for(auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
}