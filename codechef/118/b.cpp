#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    long long m;
    cin>>n>>m;
    vector<long long>arr(n,0);
    
    for(auto &i: arr){
        cin>>i;
    }
    
    
    long long res=0;
    
    
    long long curillitracy=0;
    
    long long l=0;
    long long r=0;
    
    for(auto i: arr){
        curillitracy+=i;
    }
    if(curillitracy<m){
        cout<<0<<endl;
        return;
    }
    
    while(l<n && r<n){
        curillitracy=arr[l];
        r=l+1;
        
        while(curillitracy + arr[r]<m && r<n ){
            curillitracy+=arr[r];
            r++;
        }
        if(curillitracy >= m ){
            res++;
            l=r+1;
        }
        else l=r;
        
    
        
    }
    
    cout<<res+1<<endl;
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}