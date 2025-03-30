#include <bits/stdc++.h>
using namespace std;


int main(){
   vector<int> arr = {10,5,10,15,10,5};
    unordered_map<int ,int> map;
    for(int i = 0;i<arr.size();i++){
        map[arr[i]]++;
    }
    cout << map[5];
    return 0;
}

