#include<bits/stdc++.h>
using namespace std;


void solve(){
    char c;
    cin>>c;
    set<char>se={'c','o','d','e','f','r','c','e','s'};

    if(se.find(c)!=se.end())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}