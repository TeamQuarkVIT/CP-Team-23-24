#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}
int main(){
    // int t;
    // cin>>t;
    // while(t--)solve();
    string s;
    cin >> s;
    // bool leading=true;
    for(auto &i : s){
        int k=i-'0';
        if(k>=5){
            i='0' +(9-k);
        }
    }
    if(s[0]=='0')s[0]='9';
    cout<<s<<endl;

    return 0;
}