class Solution {
public:
    int myAtoi(string s) {
        
        const int len = s.size();
        
        if(len == 0){
            return 0;
        }
        
        int index = 0;
        while(index < len && s[index] == ' '){
            ++index;
        }

        if(index == len){
            return 0;
        }
        
        char ch;
        bool minus = (ch = s[index]) == '-';
        
        if(minus || ch == '+'){
            ++index;
        }
		
        const int maxLimit = INT_MAX / 10;
        int result = 0;
        while(index < len && isnum(ch = s[index])){ 

            int digit = ch - '0';

            if(result > maxLimit || (result == maxLimit && digit > 7)){
                return minus ? INT_MIN : INT_MAX;
            }

            result = (result * 10) + digit;
            
            ++index;
        }
        
        return minus ? -result : result;
    }
    
    private:
    bool isnum(char ch){
        return ch >= '0' && ch <= '9';
    }
};