// without size
// 1 2 3 4 5 
// 1,2,3,4,5
// [1,2,3,4,5]

#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    vector<int> arr;
    int num;
    // for , seperated  
    char c;    
    while(ss >> num){
        arr.push_back(num);
        ss>>c; // storing the comma        
    }
    for(auto it: arr){
        cout << it;
    }
    cout << '\n'<< arr.size();
    return 0;    
}
*/


// int main(){
//     int n; //size
//     cin >> n;
//     vector<int> arr(n);
//     for(int i =0; i<n; i++){
//         cin >> arr[i];
//     }
//     cout << arr.size();
//     return 0;
// }


int main(){
    vector<int> arr;
    string s;
    getline(cin ,s);
    if(s.front() == '[' && s.back() ==']'){
        s = s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    int num;
    char ch;
    while (ss >> num){
        arr.push_back(num);
        ss >> ch;
    }
    cout << arr.size();
    return 0;
}

