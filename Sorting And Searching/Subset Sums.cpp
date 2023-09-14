//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void f(vector<int> arr,int n,vector<int>&ans,int i,int sum){
        //take
        if(i==n){
            return;
        }
        sum+=arr[i];
        ans.push_back(sum);
        f(arr,n,ans,i+1,sum);
        sum-=arr[i];
        f(arr,n,ans,i+1,sum);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        ans.push_back(0);
        f(arr,N,ans,0,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
