class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        if(n%2==0){
            for(int i=1;i<n;i+=2){
            string cmp=s.substr(0,i);
            int flag=0;
            int j=0;
            while(j<n){
                string curr_str=s.substr(j,i);
                j+=i;
                if(curr_str!=cmp){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return true;
            }
            }
            return false;
        }
        else{
            for(int i=1;i<n;i+=2){
            string cmp=s.substr(0,i);
            int flag=0;
            int j=0;
            while(j<n){
                string curr_str=s.substr(j,i);
                j+=i;
                if(curr_str!=cmp){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return true;
            }
            }
            return false;
        }
        
    }
};
