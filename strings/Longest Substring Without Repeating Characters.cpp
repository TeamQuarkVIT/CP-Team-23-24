class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0,maxi=0,start=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            if(!m[s[i]]){
                m[s[i]]++;
                count++;
                }
           else {
               while(m[s[i]]){
                   m[s[start]]--;
                   start++;
                   count--;
                   }
                   m[s[i]]++;
                   count++; 
           }
           maxi=max(maxi,count);
           }
        return maxi;
    }
};