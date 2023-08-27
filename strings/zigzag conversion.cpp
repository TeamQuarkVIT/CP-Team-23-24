class Solution {
public:
    string convert(string s, int numRows) {
        int dir=0,count=0;
        if(numRows<=1)
        return s;
        vector<string>row(numRows,"");
        string ans;
        for(auto i:s){
            if(count==0)
            dir=1;
            else if(count==numRows-1)
            dir=0;
            row[count]+=i;
            if(dir==1)
            count++;
            else
            count--;
        }
        for(auto i:row)
        ans+=i;
        return ans;
    }
};