class Solution {
public:

    static bool compare(string &s1, string &s2){
         return s1+s2>s2+s1; 
    }



    string largestNumber(vector<int> &num) {
        vector<string> arr;
        for(auto i:num)
            arr.push_back(to_string(i));
        sort(arr.begin() , arr.end(), compare);

        string res="";

        for(auto s:arr)  res+=s;


        while(res[0]=='0' && res.length()>1)    res.erase(0,1);
        return  res;
    }
};