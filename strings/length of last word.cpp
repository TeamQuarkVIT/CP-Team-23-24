class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,len;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
            count++;
            len=count;
            }
            else{
                count=0;
                }
        }
        if(count==0)
        return len;
        return count;
    }
};