#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Creation - map
    // map<int, int> m;

    // Creation - multimap
    multimap<int, int> m;

    // Insertion
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 35));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 303));

    // Deletion
    m.erase(40);

    // Iteration
    for(auto it = m.begin(); it != m.end(); it++)
    cout << it -> first << " " << it -> second << endl;
}