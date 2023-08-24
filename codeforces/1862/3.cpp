#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1 && arr[0]==1){
        cout<<"YES"<<endl;
        return;
    }
    else if(n==1 && arr[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    else if(arr[0]!=n){
        cout<<"NO"<<endl;
        return;
    }



    bool flag=true;
    
    for(int i=0; i<n; i++){
        if(arr[n-1 - (n - arr[i])] < i+1)flag=false;
    }

    if(flag==false){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }


}
int main(){
    int t;
    cin>>t;
    while(t--){

        
        solve();
        


    }

    return 0;
}