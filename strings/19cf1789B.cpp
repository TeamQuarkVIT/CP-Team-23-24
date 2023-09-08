#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<bool>v(n/2 , 0);

    for(int i=0; i<n/2 ; i++){
        if(s[i]!=s[n-1 -i])v[i]=1;
    }

    int p=0;
    while(p<n/2 && v[p]==0){
        // if(s[p]==0)p++;
        p++;
    }
    if(p==n/2){
        cout<<"YES"<<endl;
    }

    else {

        while(p<n/2 && v[p]==1){
            p++;
        }

        while(p<n/2 && v[p]==0){
            p++;
        }

        if(p==n/2)
            cout<<"YES"<<endl;
        
        else cout<<"NO"<<endl;
    }
    // for(auto i: v){cout<<i<<" "; }
    

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}