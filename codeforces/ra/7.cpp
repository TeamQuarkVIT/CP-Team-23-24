// https://codeforces.com/problemset/problem/1520/D
// 1200
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    // vector<int>arr(n);
    // set<int>se;

    unordered_map<int, long long >ma;
    long long res=0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        
        res = res+ (long long)ma[temp-i];
        ma[temp-i]++;
    }

    cout<<res<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}