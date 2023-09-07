class Solution{
public:	
	int solve(vector<int>&arr, int n,vector<int>&dp){
	    if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        
	    int incl =solve(arr,n-2,dp) + arr[n];
	    int excl =solve(arr,n-1,dp);
        dp[n]= max(incl,excl); 
        
        return dp[n];
	}
	int findMaxSum(vector<int>&arr, int n) {
	  vector<int> dp(n,-1);
	  int ans=solve(arr,n-1,dp);
	  return ans;
	}
};