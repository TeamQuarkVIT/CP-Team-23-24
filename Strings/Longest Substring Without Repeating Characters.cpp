class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> count;
        int left=0;
        int right=0;
        int maxi=0;
        while(right<s.length())
        {
            char r=s[right];
            count[r]++;
            while(count[r]>1){
                char l=s[left];
                count[l]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }

};
