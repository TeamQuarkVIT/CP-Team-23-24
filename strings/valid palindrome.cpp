class Solution {
    private:
    char lowerCase(char ch){
        if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))
        return ch;
        else{
        char t= ch-'A'+'a';
        return t;
        }
    }
public:
    bool isPalindrome(string s) {
int i=0;
string temp;
while(s[i]!='\0'){
        if((s[i]>='a'&& s[i]<='z')||(s[i]>='0'&& s[i]<='9')||(s[i]<='Z'&&s[i]>='A')){
            temp.push_back(s[i]);
            }
            i++;
        }
        int a=0, e= temp.length()-1;
        while(a<=e){
            if(lowerCase(temp[a])!=lowerCase(temp[e]))
            return 0;
           else{
                a++;
                e--;
            }

        }
        return 1;
    }
};
