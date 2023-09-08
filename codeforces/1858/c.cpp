// https://codeforces.com/contest/1858/problem/C
// 1000

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_set<int>r;
    for(int i = 1; i <= n;i++){
        r.insert(i);
    }
    cout<<1<<" ";
    int i=2;
    
    while(i<=n){
        int temp=i;
        while(temp<=n){
            if(r.find(temp)!=r.end()){
                r.erase(temp);
                cout<<temp<<" ";
            }
            temp*=2;
        }
        i++;
    }
    cout<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}