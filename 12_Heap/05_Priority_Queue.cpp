#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // ? Max Heap : Largest Element gets priority
    priority_queue<int> p;

    // Inserting Elements
    p.push(10);
    p.push(22);
    p.push(13);
    p.push(80);
    p.push(28);
    p.push(9);

    // Getting top Element
    cout << p.top() << endl;
    
    // Iterating Over Priority Queue (No direct access to elements)
    while(!p.empty()) {
        cout << p.top() << " ";
        p.pop();
    }

    // Deleting Element (Always top)
    p.pop();

    // Printing Size
    cout << p.size() << endl;

    // Iterating Over Priority Queue (No direct access to elements)
    while(!p.empty()) {
        cout << p.top() << " ";
        p.pop();
    }

    // ? Min Heap : Smallest Element gets priority
    // priority_queue<int, vector<int>, greater<int>>;
}