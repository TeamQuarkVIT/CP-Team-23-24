#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll findRoots(ll a, ll b, ll c)
{ 
    ll d = b * b - 4 * a * c;
    ll sqrt_val = sqrt(abs(d));
        // cout << "Roots are real and different \n";
        return (ll)(-b + sqrt_val) / (2 * a); 
}

void solve(){
    ll n, A;
    cin>>n>>A;
    ll a=0,b=0,c=0;
    ll res;

    a=1;
    c-=A;
    for(ll i=0;i<n; i++){
        ll temp;
        cin>>temp;
        b+= 2*temp;
        c+= temp*temp;
    }
    // solve the quadratic equation
    cout<< findRoots(a,b/n,c/n)/2<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}