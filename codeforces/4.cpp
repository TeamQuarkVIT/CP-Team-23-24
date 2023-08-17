// https://codeforces.com/contest/1850/problem/C

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[8][8];

    string res="";

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            // cin>>a[i][j];
            char c;

            cin>>c;
            if(c=='.')continue;
            else res+=c;
        }
    }
    cout<<res<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}