//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        
        for (auto i: x){
            if(i=='(' || i=='[' || i=='{')s.push(i);
            else{
                if(s.empty())return false;
                char ch=s.top();
                if(ch=='(' && i==')')s.pop();
                else if(ch=='[' && i==']')s.pop();
                else if(ch=='{' && i=='}')s.pop();
                else return false;
            }
            
        }
        
        
        if(s.size())return false;
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends