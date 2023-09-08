//https://codeforces.com/contest/1858/problem/A


#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First"<<endl;
        return;
    }
    else if(a<b){
        cout<<"Second"<<endl;
        return;
    }
    else {
        if(c%2){
            //odd
            cout<<"First"<<endl;
        }
        else {
            cout<<"Second"<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}