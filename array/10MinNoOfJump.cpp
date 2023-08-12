//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int curpos=0;
        int rang=arr[curpos];
        // first try not going back........
        int res=0;
        
        while(curpos<n-1){
            
            res++;
            // cout<<curpos<<endl;
            int rang=arr[curpos];
            if(rang==0)return -1;
            if(curpos+rang > n-1)return res;
            
            int temp = rang;
            int nextpos=curpos+1;
            
            int longjump=arr[nextpos];
            int index=1;
            for(int i=0 ; i<rang;i++){
                
                if(longjump < arr[nextpos+i] + i){
                    longjump=arr[nextpos+i] + i;
                    index=i+1;
                }
                
            }
            curpos += index;
            
            
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends