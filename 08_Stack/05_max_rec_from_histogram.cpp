#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// ? O(n) Solution --> Multiple Pass
int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> nextSmallerLeft(n, -1);
    vector<int> nextSmallerRight(n, n);

    stack<int> stNSL, stNSR;
    for(int i = 0; i < n; i++) {
        // Next Smaller on Left;
        while(!stNSL.empty() && heights[i] <= heights[stNSL.top()]) {
            stNSL.pop();
        }

        if(!stNSL.empty())
        nextSmallerLeft[i] = stNSL.top();

        stNSL.push(i);

        // Next Smaller on right
        while(!stNSR.empty() && heights[i] < heights[stNSR.top()]) {
            nextSmallerRight[stNSR.top()] = i;
            stNSR.pop();
        }

        stNSR.push(i);
    }

    int area = 0, currArea;
    for(int i = 0; i < n; i++) {
        int width = nextSmallerRight[i] - nextSmallerLeft[i] - 1;
        currArea = width * heights[i];
        area = max(area, currArea);
    }

    return area;
}

// ? Optimized Solution --> Single Pass 
int getMaxArea(vector<int> &arr) {
    int n = arr.size();
    stack<int> st;

    int area = 0;
    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[i] < arr[st.top()]) {
            int ind = st.top();
            st.pop();
            
            int width = st.empty() ? i : (i - st.top() - 1);
            area = max(area, arr[ind] * width);
        }
        

        st.push(i);
    }
    
    while(!st.empty()) {
        int ind = st.top();
        st.pop();
        
        int width = st.empty() ? n : (n - st.top() - 1);
        area = max(area, arr[ind] * width);
    }
    
    return area;
}
