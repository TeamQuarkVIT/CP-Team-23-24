//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

    int isP(int n){
        int k=n,cmp=0,last;
        while(k>=1){
            last=k%10;
            k=k/10;
            cmp+=last;
            cmp*=10;
        }
        if(cmp/10==n){
            return 1;
        }
        else{
            return 0;
        }
    }


    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(!isP(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
