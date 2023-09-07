class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pre=1;
        vector<int>suf(n,1);
        for(int i=n-2;i>=0;i--){
            suf[i]=nums[i+1]*suf[i+1];
        }
        vector<int> result(n, 0);
        for(int i=0;i<n;i++){
            result[i]=pre*suf[i];
            pre*=nums[i];
        }
        return result;
    }
};