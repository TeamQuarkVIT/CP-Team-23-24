//gfg solution
// time = O(n)
// space = O(n)



//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++






//****************************** Solution******************************

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        // problem is similar to Two Sum
        unordered_map<int, int>map;     //frequency count of k-arr[i]
        int res=0;
        
        for(int i=0 ;i<n; i++){
            res+= map[k-arr[i]];
            map[arr[i]]++;
        }
        return res;
        
    }
};


















//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends