#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll nl;
    cin >> nl;

    ll h=nl;
    ll l=0;

    while(l<=h){
        
        ll mid= l+ (h-l)/2;

        if(mid*(mid-1)/2 == nl){
            cout<<mid<<endl;
            return;
        }
        else if(mid*(mid-1)/2 > nl){
            l = mid+1;
        }
        else h = mid-1;
        
    }

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}