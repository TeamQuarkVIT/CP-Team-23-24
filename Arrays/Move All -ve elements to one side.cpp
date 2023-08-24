#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.

    int start=0;
    int end=nums.size()-1;
    while (end > start) {
        if (nums[start] < 0) {
            start++;
        }
        else if (nums[end] >= 0) {
            end--;
        }
        else {  // Swap only if start < end
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
        
    }
    
    return nums;
}
