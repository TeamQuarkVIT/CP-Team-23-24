//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count=0;
	    long long csum;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        int j=i+1;
	        int k=n-1;
	        if(arr[i]>=sum){
	            break;
	        }
	        while(j<k){
	            csum=arr[i]+arr[j]+arr[k];
	            if(csum<sum){
	                count+=(k-j);
	               j++;
	            }
	            else{
	                k--;
	            }
	            
	        }
	    }
	    return count;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
