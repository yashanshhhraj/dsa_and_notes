#include<iostream>
#include<vector>
using namespace std;

void subSequence(int arr[], int i, int n, vector<vector<int>>& ans, vector<int> &temp) {
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
    int arr[] = {1, 2, 3, 4};
    vector<vector<int>> ans;
    vector<int> temp;
    int n = sizeof(arr) / sizeof(arr[0]);
    subSequence(arr, 0, n, ans, temp);

    // ? Printing Elements
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++)
        cout << ans[i][j] << " ";

        cout << endl;
    }
}