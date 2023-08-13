class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k < 0)
                continue;
                
            int low_tower=min(arr[0]+k,arr[i]-k);
            int high_tower = max(arr[n-1]-k,arr[i-1]+k);
            ans=min(ans,high_tower-low_tower);
        }
        return ans;
    }
};
