// https://codeforces.com/contest/1850/problem/B
// #define loop(n) for(int ii = 0; ii < n; ++ ii)
#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin>>n;
    int res=1;
    int maxb=INT_MIN;

    for(int i=0 ; i<n ; i++){
        int a, b;
        cin>>a>>b;
        if(a<=10 && b>maxb){
            maxb = b;
            res=i+1;
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