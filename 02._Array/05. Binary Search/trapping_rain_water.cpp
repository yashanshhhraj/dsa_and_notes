#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int supp, water_stored = 0;

    if(height.size() == 0 || height.size() == 1) return 0;

    vector<int> leftMax_arr (height.size());
    vector<int> rightMax_arr (height.size());
    vector<int> water_arr (height.size());
        
    leftMax_arr[0] = 0;
    // Finding leftMax_arr
    for(int i = 1; i < height.size(); i++)
    leftMax_arr[i] = max(leftMax_arr[i - 1], height[i - 1]);
    
    cout << endl;
    // Printing LeftMax Array
    cout << "leftMax_arr : ";
    for(int i = 0; i < height.size(); i++)
    cout << leftMax_arr[i] << ", ";

    rightMax_arr[0] = 0;
    // Finding rightMax_arr
    for(int i = height.size() - 2; i >= 0; i--)
    rightMax_arr[i] = max(height[i + 1], rightMax_arr[i + 1]);

    // Printing RightMax Array
    cout << endl;
    cout << "RightMax_arr : ";
    for(int i = 0; i < height.size(); i++)
    cout << rightMax_arr[i] << ", ";

    cout << endl << "Water Stored : ";
    for(int i = 0; i < height.size(); i++)
    {
        supp = min(leftMax_arr[i], rightMax_arr[i]);
        cout << supp << ", ";

        if(supp > height[i])
        water_stored += supp - height[i];
    }

    return water_stored;
}

int main(){
    vector<int> water_height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << endl << "Trapped Water : " << trap(water_height);
}