//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int woodCollected(int tree[],int n,int height){
        int ans=0;
        for(int i=0;i<n;i++){
            if(tree[i]-height>0){
                ans+=tree[i]-height;
            }
        }
        return ans;
    }
    int find_height(int tree[], int n, int k)
    {
        // code here
        int start=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(tree[i]>maxi){
                maxi=tree[i];
            }
        }
        int end=maxi;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(woodCollected(tree,n,mid)==k){
                return mid;
            }
            if(woodCollected(tree,n,mid)>k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends
