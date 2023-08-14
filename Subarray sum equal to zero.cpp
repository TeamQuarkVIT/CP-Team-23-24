#include <bits/stdc++.h> 
int countSubarrays(int n, vector<int> &arr){
    int sum = 0;
    std::unordered_map<int, int> mpp;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0) {
            ans++;
        }
        if (mpp.find(sum) != mpp.end()) {
            ans += mpp[sum];
        }
        mpp[sum]++;
    }
    return ans;
}
