#include<iostream>
#include<vector>
using namespace std;

void validParenthesis(int n, int l, int r, vector<vector<string>>& ans, vector<string> & temp) {
    if(l == n || r == n || r > l) {
        return;
    }

    // ? Adding (
    temp.push_back('(');
    validParenthesis(n, l + 1, r, ans, temp);
    
    // ? Adding )
    temp.push_back(')');
    validParenthesis(n, l, r + 1, ans, temp);
}

int main() {
    int n = 3;
    vector<vector<string>> ans;
    vector<string> temp;
    validParenthesis(n, 0, 0, ans, temp);

    for(int i = 0; i < ans.size(); i++)
    for(int j = 0; j < ans[i].size(); j++)
    cout << ans[i][j] << ", ";
}