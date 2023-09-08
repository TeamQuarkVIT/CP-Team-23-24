//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int stk = 0;        // smaller than k
        for (int i = 0; i < n; ++i)
            if (arr[i] <= k)
                stk++;
                
                
        //greater than k within the required array lenth
        
        int gtk = 0;
        
        for (int i = 0; i < stk; ++i)
            if (arr[i] > k)
                gtk++;
                
        
        int res = gtk;
        for (int i = 0, j = stk;     j < n;    i++, j++)
        {
            if (arr[i] > k)gtk--;
            
            
            if (arr[j] > k)gtk++;
            
            
            res = min(res, gtk);
        }
        return res;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends