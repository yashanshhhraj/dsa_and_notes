#include<iostream>
using namespace std;

bool isPal(string s, int start, int end) {
    // Base Case
    if(s[start] != s[end]) return 0;

    // If complete string traversed
    if(start >= end) return 1;

    // If string traversed till now is palindrome
    return isPal(s, start + 1, end - 1);
}

int vowelCount(string s, int n) {
    // Base Case
    if(n == -1) return 0;

    // If Vowel
    if(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u') return 1 + vowelCount(s, n - 1);

    // If not Vowel
    return vowelCount(s, n - 1);
}

void reverseString(string &s, int start, int end) {
    // Base Case
    if(start >= end) return;

    // Swapping Values
    char c = s[end];
    s[end] = s[start];
    s[start] = c;

    // Recursive Call for the rest of the values
    reverseString(s, start + 1, end - 1);
}

void lowToUp(string &s, int n) {
    // Base Case
    if(n == -1) return;

    // Changing from lowercase to uppercase
    s[n] = 'A' + s[n] - 'a';

    // Call for rest of the values
    lowToUp(s, n - 1);
}

void toggle(string &s, int n) {
    // Base Case
    if(n == -1) return;

    // Lowerase to Uppercase
    if(s[n] >= 'a' && s[n] <= 'z') s[n] = 'A' + s[n] - 'a';
    // Uppercase to Lowercase
    else if(s[n] >= 'A' && s[n] <= 'Z') s[n] = 'a' + (s[n] - 'A');

    // Call for rest of the values
    toggle(s, n - 1);
}

int main() {
    string s = "n_Ma df";

    // ? Cheking if the string is palindrome
    // cout << isPal(s, 0, s.size() - 1) << endl;

    // ? Printing the count of vowel
    // cout << vowelCount(s, s.size() - 1);

    // ? Reversing a string
    // reverseString(s, 0, s.size() - 1);
    // cout << s << endl;

    // ? Lowercase to Uppercase
    lowToUp(s, s.size() - 1);
    cout << s << endl;

    // ? Upperase to Lowercase & Vice Versa
    // toggle(s, 5);
    // cout << s << endl;
}