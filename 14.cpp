#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string res;
    sort(strs.begin(), strs.end());
    int strOlen = strs[0].size();
    int strslen = strs.size();
    for (int i = 0; i < strs.size() - 1; i++) {
        if (strs[0][i] == strs[strslen - 1][i]) {
            res = res + strs[0][i];
        }
        else {
            break;
        }
    }
    return res;
}