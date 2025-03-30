#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
    int len = 0, tail = s.size() - 1;
    // point to last alphabet
    while(tail >= 0 && s[tail] == ' ') tail --;
    // cal the len of the last word
    while(tail >= 0 && s[tail] != ' ') {
        len++;
        tail--;
    }
    return len;
}