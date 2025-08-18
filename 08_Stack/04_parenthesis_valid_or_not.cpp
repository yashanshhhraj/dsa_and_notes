#include<iostream>
#include<stack>
using namespace std;

// bool isValidParenthesis(string s) {
//     stack<char> st;

//     st.push(s[0]);
//     for(int i = 1; i < s.size(); i++) {
//         if(!st.empty() && st.top() == '(' && s[i] == ')')
//         st.pop();

//         else
//         st.push(s[i]);
//     }

//     return st.empty();
// }

bool isValidParenthesisO1(string s) {
    int count = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') count++;
        else {
            if(count == 0) return 0;
            else count--;
        }
    }

    return count == 0;
}

int main() {
    string s = "((()))()";

    // cout << s << (isValidParenthesis(s) ? " is Valid" : " is not Valid") << endl;
    cout << s << (isValidParenthesisO1(s) ? " is Valid" : " is not Valid") << endl;
}