class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>se;
        int l=0;
        int r=0;
        int res=0;

        while(r<s.length()){
            while(se.find(s[r])!=se.end()){
                se.erase(s[l++]);
            }
            se.insert(s[r++]);
            // res=max(res,r-l);
            if(r-l >res)res=r-l;
        }
        return res;
    }
};