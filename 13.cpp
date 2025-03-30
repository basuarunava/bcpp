#include <bits/stdc++.h>
using namespace std;

// int to roman
int romanToInt(string s) {
    int res = 0;
    unordered_map<char, int>umap;
    umap['I'] = 1;
    umap['V'] = 5;
    umap['X'] = 10;
    umap['L'] = 50;
    umap['C'] = 100;
    umap['D'] = 500;
    umap['M'] = 1000;
    // in case out of bound the value is going to be 0
    for(int i = 0; i<s.size(); i++){    
        if(umap[s[i]] <unmap[s[i+1]]){
            res = res - umap[s[i]];
        }else{
            res = res + umap[s[i]];
        }
    }
    return res;
}
