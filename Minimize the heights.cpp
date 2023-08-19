class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr,arr+n);
       int ans=arr[n-1]-arr[0];
       int maxi=0,mini=0;
       for(int i=0;i<n;i++){
           maxi=max(arr[i]+k,arr[n-1]-k);
           mini=min(arr[0]+k,arr[i]-k);
           if(mini<0)
           continue;
           ans=min(ans,maxi-mini);
       }
       return ans;
    }
};