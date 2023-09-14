#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>arr={-10, -1, 0, 3, 10, 11, 30, 50, 100 };
    int resma=INT_MIN;
    int resmi=INT_MAX;
    for(auto i : arr){
        if(i<resmi)resmi=i;
        if(i>resma)resma=i;
    }
    cout<<"max:"<<resma<<endl;
    cout<<"min:"<<resmi<<endl;
}
int main(){
    // int t;
    // cin>>t;
    solve();

    return 0;
}