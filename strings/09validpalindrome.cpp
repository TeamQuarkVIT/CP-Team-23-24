
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j= s.size()-1;
        while(i<=j){
            if(s[i]>='A'&& s[i]<='Z')s[i]= 'a' + s[i] -'A';
            
            if(s[j]>='A'&& s[j]<='Z')s[j]= 'a' + s[j] -'A';

            if(isalnum(s[i]) &&   isalnum(s[j])){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            else {
                if(!isalnum(s[i]))i++;
                if(!isalnum(s[j]))j--;
                
            }

        }
        return true;
    }
};