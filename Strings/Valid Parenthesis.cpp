class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int curly=0;
        int round=0;
        int square=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' ){
                st.push(')');
            }
            else if(s[i]=='{'){
                st.push('}');
            }
            else if(s[i]=='['){
                st.push(']');
            }
            else{
                if(st.empty() || st.top()!=s[i]){
                    return false;
                }
                st.pop();
            }
           
            
           
            
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};
