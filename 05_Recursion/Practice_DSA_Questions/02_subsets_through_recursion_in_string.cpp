#include<iostream>
#include<vector>
using namespace std;

void subSequence(string arr, int i, int n, vector<string>& ans, string &temp) {
    if(i == n) {
        ans.push_back(temp);
        return;
    }

    // If, we want to add the element
    temp.push_back(arr[i]);
    subSequence(arr, i + 1, n, ans, temp);

    // If we do not want the element to be added
    temp.pop_back();
    subSequence(arr, i + 1, n, ans, temp);
}

int main() {
    // ? For strings
    string s = "abcd";
    vector<string> ans;
    string temp;
    int n = s.size();
    subSequence(s, 0, n, ans, temp);

    // ? Printing Elements
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++)
        cout << ans[i][j] << " ";

        cout << endl;
    }
}