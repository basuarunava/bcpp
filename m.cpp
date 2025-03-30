#include <bits/stdc++.h>
using namespace std;


int main() {
    int n = 5, sum = 0;
    int arr[n] = {1,2,3,4};
    for (int i = 0; i < n; i++) {
        sum += (double)arr[i];
    }
    cout << sum;
    return sum;
}

