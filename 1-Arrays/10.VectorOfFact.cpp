class Solution {
public:
    vector<int> factorial(int N){
        // code here
    vector<int> result;
        result.push_back(1);
        int carry=0,mul=0;
        for(int i=2 ;i<N+1;i++)
        {
            for(int j = 0;j<result.size();j++)
            {
                mul  = result[j]*i+carry;
                result[j] = mul%10;
                carry = mul/10;
            }
                while(carry >0)
                {
                    result.push_back(carry%10);
                    carry = carry/10;
                }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
