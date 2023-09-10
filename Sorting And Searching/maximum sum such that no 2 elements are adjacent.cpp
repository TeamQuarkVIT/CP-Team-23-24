#include <bits/stdc++.h> 

int f(vector<int> &nums,int n,int i,vector<int>&dp){
    if(i<0){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i]=max(f(nums,n,i-1,dp),nums[i]+f(nums,n,i-2,dp));
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int>dp(n,-1);
    return f(nums,n,n-1,dp);
}
