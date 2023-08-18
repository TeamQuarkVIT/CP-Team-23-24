//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int max_ele=INT_MIN;
        int min_ele=INT_MAX;
        int mini=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>=k){
                max_ele=max(arr[i-1]+k,arr[n-1]-k);
                min_ele=min(arr[i]-k,arr[0]+k);
            
            mini=min(max_ele-min_ele,mini);
            }
            
        }
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        return mini;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
