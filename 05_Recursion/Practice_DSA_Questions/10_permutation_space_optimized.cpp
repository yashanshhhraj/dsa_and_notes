#include <iostream>
#include <vector>
using namespace std;

void permute(int arr[], vector<vector<int>> & ans, int n, int i) {
    if(i == n) {
        ans.push_back(vector<int>(arr, arr + n));
        return;
    }

    for(int j = i; j < n; j++) {
        swap(arr[i], arr[j]);
        permute(arr, ans, n, i + 1);
        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> ans;

    permute(arr, ans, n, 0);

    int k = 1;
    for(int i = 0; i < ans.size(); i++){
        cout << k << ". ";
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        k++;
        cout << endl;
    }
} 