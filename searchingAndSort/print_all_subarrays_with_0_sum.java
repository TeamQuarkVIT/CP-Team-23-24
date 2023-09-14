class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        map<long long,int> mp;
        mp[0]=1;
        long long presum=0,count=0;
        for (int i=0;i<n;i++){
            presum=presum+arr[i];
            count=count+mp[presum];
            mp[presum]++;
        }
        return count;
    }
};
