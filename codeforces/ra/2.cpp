// https://codeforces.com/contest/1850/problem/A

#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b >=10)yes;
    else if(a+c>=10)yes;
    else if(b+c>=10)yes;
    else no;
}


int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}