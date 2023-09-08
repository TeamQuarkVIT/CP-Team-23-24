class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char>ma;
        unordered_map<char, char>ma2;
        

        for(int i=0 ; i< s.length() ; i++){

            if(ma.find(s[i])!=ma.end()){
                // found
                if(ma[s[i]]!= t[i])return false;
            }
            else 
                ma[s[i]]=t[i];

        }

        for(int i=0 ; i< s.length() ; i++){

            if(ma2.find(t[i])!=ma2.end()){
                // found
                if(ma2[t[i]]!= s[i])return false;
            }
            else 
                ma2[t[i]]=s[i];

        }


        return true;
    }
};