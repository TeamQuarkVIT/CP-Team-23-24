// this is a leetcode solution beats  81% 
// This aproach is Simulation
// time O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;

        sort(intervals.begin(), intervals.end());
        int a= intervals[0][0];
        int b= intervals[0][1];

        int cur=0;
        int N= intervals.size();

        while(cur<N){
            
            int a= intervals[cur][0];
            int b= intervals[cur][1];

            int i= 0;

            while(cur+i<N && intervals[cur+i][0] <= b){
                // i++;
                // cout<<a<<b<<endl;
                if(intervals[cur+i][1] >=b )b=intervals[cur+i][1];
                i++;
            }
            // cout<<a<<b<<endl;
            res.push_back({a,b});
            cur= cur+i;

        }
        return res;

    }
};
