class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>n;
        unordered_map<char,char>m;
        for(int i=0;i<s.length();i++){
            if(!n[s[i]])
            n[s[i]]=t[i];
            else{
                if(n[s[i]]!=t[i])
                return false;
            }
            if(!m[t[i]])
            m[t[i]]=s[i];
            else{
                if(m[t[i]]!=s[i])
                return false;
            }
        }
        return true;
    }
};