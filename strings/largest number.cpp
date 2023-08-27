class Solution {
public:
static bool compare(int a,int b){
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}
    string largestNumber(vector<int>& nums) {
        string a="";
       sort( nums.begin(), nums.end(), compare);
       for(int i = 0 ; i < nums.size() ; i++) {
            a += to_string(nums[i]);
        }
        if(a[0] == '0')
           return "0";
        return a;
    }
};