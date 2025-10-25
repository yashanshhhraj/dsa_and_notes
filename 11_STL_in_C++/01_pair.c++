#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // ? Creation
    // pair<string, int> p;

    // ? Inserting Value
    // 1.
    // p = make_pair("Rohit" , 30);

    // 2.
    // p.first = "Rohit";
    // p.second = 30;

    // ? Accessing Values
    // cout << p.first << " " << p.second;

    // ? Nested Pair
    // Name, Age, Weight
    // pair<string, pair<int , int>> p;
    
    // Inserting Values
    // 1.
    // p = make_pair("Rohit", make_pair(25, 80));

    // 2.
    // p.first = "Rohit";
    // p.second.first = 25;
    // p.second.second = 80;

    // Accessing Values
    // cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    
    // ? Example
    pair<pair<string , int>, int> p;
    p = make_pair(make_pair("Rohit", 25), 80);
    cout << p.first.first << " " << p.first.second << " " << p.second << endl;
}