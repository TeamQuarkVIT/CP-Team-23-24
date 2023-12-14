#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin >> x >> y>>z;

    if(x*y <= z*1440)cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}