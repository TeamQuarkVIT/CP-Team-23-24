//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int res=n;           // can even take a flag 
        bool flag=false;
        
        long long sum=0;
        int l=0;
        int r=-1;
        
        
        while(r<n){
            // cout<<l<<" "<<r<<" "<<sum<<endl; 
            if(sum>x){
                res= min(res, r-l+1);
                flag=true;
                sum-= (long long)arr[l++];
            }
            else {
                sum+=(long long)arr[++r];
            }
        }
        
        
        
        return (flag )? res : 0;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends