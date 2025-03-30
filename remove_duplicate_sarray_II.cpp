// 80 - remove duplicates from the sorted array
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 2;    
    if(nums.size() <= 2 ) return nums.size();

    //start from 2nd element
    for(int i = 2; i<nums.size(); i++){
        if(nums[i] != nums[k-2]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;   
}