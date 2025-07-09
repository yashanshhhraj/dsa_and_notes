#include<iostream>
#include<vector>
using namespace std;

void validParenthesis(int n, int l, int r, vector<string>& ans, string & temp) {
    if(l == n && r == n) {
        ans.push_back(temp);
        return;
    }

    // ? Adding (
    if(l < n) {
        temp.push_back('(');
        validParenthesis(n, l + 1, r, ans, temp);
        temp.pop_back();
    }

    if(r < l){
        // ? Adding )
        temp.push_back(')');
        validParenthesis(n, l, r + 1, ans, temp);
        temp.pop_back();
    }
}

int main() {
    int n = 2;
    vector<string> ans;
    string temp;
    validParenthesis(n, 0, 0, ans, temp);

    for(int i = 0; i < ans.size(); i++)
    cout << ans[i] << ", ";
}