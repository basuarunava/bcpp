#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int index = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
int main() {

    return 0;
}



