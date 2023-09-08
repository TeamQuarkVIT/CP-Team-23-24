#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a;
    cin >> a;
    if(a[0]==a[a.length()-1]){
        cout<<a<<endl;
    }
    else {
        a[a.length()-1]=a[0];
        cout<<a<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}