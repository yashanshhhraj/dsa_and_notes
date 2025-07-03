#include<iostream>
#include<vector>
#include<string>
using namespace std;

void lpsFind(vector<int> &lps, string s) {
    int pre = 0, suf = 1;

    while(suf < s.size()) {
        if(s[pre] == s[suf]) {
            lps[suf] = pre + 1;
            pre++, suf++;
        }

        else {
            if (pre == 0) {
                lps[suf] = 0;
                suf++;
            }

            else {
                pre = lps[pre - 1];
            }
        }
    }
}

int main() {
    string a = "abcdabaaa";
    vector<int> lps(a.size(), 0);
    lpsFind(lps, a);

    for(int i = 0; i < lps.size(); i++) {
        cout << lps[i] << ", ";
    }
}