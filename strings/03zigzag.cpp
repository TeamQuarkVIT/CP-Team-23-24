class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>>arr(numRows);
        // int inc=1;

        int count=0;
        int n=s.length();
        while(count < n ){
            
            for(int i=0;count < n, i<numRows   ; i++){
                arr[i].push_back(s[count]);
                count++;
                if(count == n)break;
            }
            // count--;
            if(count == n)break;
            for(int i=numRows-2;  count < n , i>=1 ; i--){
                arr[i].push_back(s[count]);
                count++;
                if(count == n)break;
            }
        }
        string res="";
        // cout<<"tmkb"<<endl;
        for(auto i: arr){
            for(auto j :  i){
                res+=j;
            }
        }
        return res;



    }
};