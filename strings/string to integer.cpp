class Solution {
public:
    int myAtoi(string s) {
        bool sign=0;
        int i=0;
        while(i<s.length() && s[i] == ' '){
            i++;
        }
        if(i<s.length() && (s[i]=='-'||s[i]=='+')){
            if(s[i]=='-')
            sign = 1;
            i++;
        }
        long ans = 0;
        while(i<s.length()&& s[i] >= '0' && s[i] <= '9'){
            int num = s[i] - '0';
            ans = ans*10 + num;
            if(ans > INT_MAX){
                if(sign==0){
                    return INT_MAX;
                } 
                else{
                    return INT_MIN;
                }
            }
            i++;
        }
        if(sign){
            ans = -ans;
        }
        return ans;
    }
};