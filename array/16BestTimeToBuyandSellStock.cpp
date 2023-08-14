
// this is a leetcode solution
// uses DP approach

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsofar = INT_MAX;
        int maxprofit = 0;
        int profitcurrent = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minsofar){
                minsofar = prices[i];
            }
            profitcurrent = prices[i] - minsofar;
            if(maxprofit < profitcurrent){
                maxprofit = profitcurrent;
            }
        }
        return maxprofit;
        
    }
};