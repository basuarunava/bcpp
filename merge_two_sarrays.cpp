// merge two sorted array
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int midx = m-1;
       int nidx = n-1;
       int right = m+n-1;     

       while (nidx >= 0){
        if(midx >= 0 && nums1[midx]> nums[nidx]){
            nums1[right] = nums[midx];
            midx --;
        }else{
           nums[right] = nums[nidx];
           nidx --;
        }
        right --;
       }
}
