#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int subSeq = pow(2, n);
    
    for(int i = 0; i < subSeq; i++) {
        string binary;
        int rem = 1, num = 0;
        int count = i;
        while(count) {
            char bit = (count % 2) + '0';
            binary.push_back(bit);
            count /= 2;
        }

        while(binary.size() < n)
        binary.push_back('0');

        reverse(binary.begin(), binary.end());

        cout << "{";
        bool first = true;
        for(int k = 0; k < binary.size(); k++) {
            if(binary[k] == '1') {
                if(!first) cout << ", ";
                cout << arr[k];
                first = false;
            }
        }
        cout << "}";
        cout << endl;
    }
}