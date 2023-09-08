#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>inp;
    // cin>>res[0];
    // n--;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        inp.push_back(temp);
        // res.push_back(temp);
        // res.push_back(temp);
    }
    
    if(inp.size()==1){
        cout<<1<<endl;
        cout<<inp[0]<<endl;
        return;
    }

    vector<int>res;
    res.push_back(inp[0]);
    for(int i=1; i<n; i++){
        if(inp[i]>=inp[i-1]){
            res.push_back(inp[i]);
        }
        else {
            res.push_back(inp[i]);
            res.push_back(inp[i]);
        }
        
    }
    cout<<res.size()<<endl;
    for(auto i: res ){
        cout<<i<<" ";
    }
    cout<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}