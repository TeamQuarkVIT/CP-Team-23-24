class Solution {
public:
    int lengthOfLastWord(string s) {
        // reverse(s.begin(), s.end());
        int p=s.length()-1;
        while(s[p]==' ')p--;

        int res=0;

        while(p>=0 && s[p]!=' ' ){
            p--;
            res++;
        }
        return res;


    }
};