class Solution {
public:
    string reverseWords(string s) {
       string ans="",p="";
       for(int i=0;i<s.length();i++){
           if(s[i]!=' '){
               p.push_back(s[i]);
           }
           else if(s[i]==' '&& p!=""){
               ans=p+' '+ans;
               p="";
           }
           else
           continue;
       }
       if(p.size() > 0 ){
            ans = p+' '+ans;
        }
        ans=ans.substr(0,ans.size()-1);
        return ans;

    }
};