#include <iostream>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();

    for (int length = n; length >= 1; --length) {
        for (int start = 0; start <= n - length; ++start) {
            int end = start + length - 1;
            string ans = s.substr(start, length);
            
            vector<int> freq(256, 0);
            for (char ch : ans)
            freq[ch]++;

            bool isUnique = true;
            for(int i = 0; i < 256; i++) {
                if(freq[i] > 1) {
                    isUnique = false;
                    break;
                }
            }

            if(isUnique) return length;
        }
    }

    return 0;
}

int main() {
    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s) << endl;
}