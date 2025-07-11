#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int i, int n, vector<vector<int>> &ans, vector<int> &temp, int sum,  vector<int>& sumArr)
{
    if (i == n)
    {
        ans.push_back(temp);
        sumArr.push_back(sum);
        return;
    }

    // If, we want to add the element
    temp.push_back(arr[i]);
    subSequence(arr, i + 1, n, ans, temp, sum + arr[i], sumArr);
    
    // If we do not want the element to be added
    temp.pop_back();
    subSequence(arr, i + 1, n, ans, temp, sum, sumArr);
}

int main()
{
    int arr[] = {2, 5, 6, 1, 3, 2};
    vector<vector<int>> ans;
    vector<int> temp;
    int sum = 0;
    vector<int> sumArr;
    int n = sizeof(arr) / sizeof(arr[0]);
    subSequence(arr, 0, n, ans, temp, sum, sumArr);

    // ? Printing Elements
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Sum: " << sumArr[i]<< ", Elements: ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";

        cout << endl;
    }
}