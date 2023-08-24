class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;

        for(int i=0; i<s.length();i++){
           
            {
                if(s[i]=='('|| s[i]=='['|| s[i]=='{'){
                    stac.push(s[i]);
                }

                else if(stac.size()>=1){
                    if(s[i]==')'&& stac.top()=='(' ){
                        stac.pop();
                    }
                    else if(s[i]==']'&& stac.top()=='['){
                        stac.pop();
                    }
                    else if(s[i]=='}'&& stac.top()=='{'){
                        stac.pop();
                    }
                    else{
                    return false;
                }
                }
                else{
                    return false;
                }
                
            }

            
        }
        if(stac.size())return false;
        return true;
    }
};