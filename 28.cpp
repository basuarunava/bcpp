#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
    int hylen = haystack.size();
    int nedlen = needle.size();
    for (int i = 0; i <= hylen - nedlen; i++) {
        if (haystack.substr(i, nedlen) == needle) {
            return i;
        }
    }
    return -1;
}