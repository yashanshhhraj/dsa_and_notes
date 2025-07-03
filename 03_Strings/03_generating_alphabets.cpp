#include<iostream>
using namespace std;

int main() {
    string word = "a";
    int k = 5;

    while(word.size() < k) {
        int n = word.size();
        for(int i = 0; i < n; i++) {
            if(word[i] == 'z') word.push_back('a');
            else word.push_back(word[i] + 1);

            if(word.size() >= 5) break;
        }
    }

    for(int i = 0; i < word.size(); i++)
    cout << word[i] << ", ";
} 