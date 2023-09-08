// gfg solution
// time complexity = O(n1+n2+n3)
// space complexity = O(n1+n2+n3)



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends




//************************* Solution ************************
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int a=0;
            int b=0;
            int c=0;
            
            vector<int>res;
            while(a<n1 && b<n2 && c<n3){
                // cout<<a<<" "<<b<<" "<<c<<" "<<endl;
                if(A[a]==B[b] && B[b]==C[c]){
                    if(res.size()==0)res.push_back(A[a]);
                    else if( res[res.size()-1]!=A[a] )res.push_back(A[a]);
                    a++;b++;c++;
                    continue;
                }
                if (A[a]<B[b])a++;
                else if (B[b]<C[c])b++;
                else c++;
                
                
            }
            
            return res;
            
            
        }

};














//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends