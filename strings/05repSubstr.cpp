class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string pat = s; 

        for(int i=0; i<s.size()-1; i++){ 
            char c =pat[0];  // Store the first char
            pat.erase(0,1); // Remove the first char
            pat.push_back(c); // Append the char

            if(pat==s) { 
                return true; 
            }
        }
        return false;
    }
};