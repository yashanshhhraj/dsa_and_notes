#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;

    // ? Pushing Values
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(60);
    l.push_front(23);

    // ? Deleting Values
    l.pop_back();
    l.pop_front();

    // ? Accessing Values
    cout << l.front() << " " << l.back() << endl;

    // ? Getting Size
    cout << l.size() << endl;

    // ? Iterating Over Values
    for(auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }

    // auto ==> list<int>::iterator

    // ? Reverse iteration
    for(auto it = l.rbegin(); it != l.rend(); it++) {
        cout << *it << " ";
    }
}