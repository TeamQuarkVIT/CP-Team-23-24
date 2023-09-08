#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
        int res=0;

    // if(n%2){
        // odd length
        // res=1;
        int center= n/2;
        // int i=0;
        for(int i=center+1; i<n; i++){
            if(s[i]==s[center]){
                res+=2;
            }
            else break;
        }
        if(n%2)res++;
        else res+=2;

        cout<<res<<endl;

    // }
    
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}