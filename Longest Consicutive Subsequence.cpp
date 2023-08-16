class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s1;
        int maxi=1;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size();i++){
            s1.insert(nums[i]);
        }
        for(auto it:s1){
            if(s1.find(it-1)==s1.end()){
                int cnt=1;
                int x=it;
                while(s1.find(x+1)!=s1.end()){
                    x=x+1;
                    cnt++;
                }
                maxi=max(cnt,maxi);
            }
        }
        return maxi;
    }
};
