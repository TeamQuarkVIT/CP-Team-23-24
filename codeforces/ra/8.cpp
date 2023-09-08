
// https://codeforces.com/problemset/problem/1537/C
// 1200

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i : v){ 
        cin>>i;
    }
    
    sort(v.begin(), v.end());
    int mindiff=INT_MAX;

    int terminals=0;

    for(int i=0; i<v.size()-1; i++){
        if(v[i+1]-v[i] < mindiff){
            terminals=i;
            mindiff=v[i+1]-v[i];
        }
    }

    // terminals and terminals+1 are initial and final mountains

    // vector<int>res;

    cout<<v[terminals]<<" ";

    // for(int i = 0; i < v.size(); i++){

    //     if(i!=terminals && i!=terminals+1){
    //         // res.push_back(v[i]);
    //         cout<<v[i]<<" ";
    //     }
    // }

    int index=terminals+1;
    

    for(int i=0; i<v.size(); i++){
        if(index != terminals && index!=terminals+1)cout<<v[index]<<" ";
        index= (index+1)%v.size();
        
    }

    cout<<v[terminals+1]<<endl;
    
    




}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}