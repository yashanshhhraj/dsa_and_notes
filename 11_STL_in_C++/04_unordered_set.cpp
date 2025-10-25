#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// unordered_set & unordered_multiset -> Search, Insert, Delete in O(1) time

int main() {
    // Allows unique values in any order
    // unordered_set<int>s;
    
    // Allows duplicate values in any order
    unordered_multiset<int>s;

    // ? Insertion
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(15);
    s.insert(11);
    s.insert(20);
    s.insert(40);

    // ? Iterating over it
    for(auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
}