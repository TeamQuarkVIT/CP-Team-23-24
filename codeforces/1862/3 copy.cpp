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
    // 5 4 3 2 1 
    ll size =0;
    vector<ll>res(n);
    ll mas=arr[0];
    ll ind=0;

    for(ll i=0; i<mas; i++){
        while(i == mas-arr[ind] ){
            ind++;
            size++;
        }
        cout<<"\t"<<size<<endl;
        res.push_back(size);
    }
    reverse(res.begin(), res.end());

    bool ewual = true;

    for(ll i=0; i<n; i++){
        if(res[i]!=arr[i]){
            ewual=false;
            break;
        }
    }
    
    if(ewual){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
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