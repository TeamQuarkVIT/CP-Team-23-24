class Solution {
    private:
    string say(string s){
        string result="";
        for(int i=0;i<s.length();i++){
            int count=1;
            while(i<s.length()-1&& s[i]==s[i+1]){
                count++;
                i++;
            }
            string str=to_string(count);
            result+=str;
            result+=s[i];
        }
        return result;
    }
public:
    string countAndSay(int n) {
        string s="1";
        if(n==1)
        return s;
        for(int i=2;i<=n;i++){
            string str=say(s);
            s=str;
        }
        return s;
    }
};