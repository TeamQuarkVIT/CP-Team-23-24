#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>arr={-10, -1, 0, 3, 10, 11, 30, 50, 100 };
    int i=0;
    for(i=0; i<arr.size();i++){
        if(arr[i]==i){
            cout<<arr[i]<<endl;
            return ;
        }

    }
    cout<<-1;
}
int main(){
    // int t;
    // cin>>t;
    solve();

    return 0;
}