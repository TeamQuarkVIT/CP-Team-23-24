// https://codeforces.com/contest/1850/problem/D

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>ar;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        ar.push_back(temp);
    }
    sort(ar.begin(), ar.end());

    int p=0;
    int res=1;
    int curmmax=1;

    while(p<ar.size()-1){
        if( (ar[p+1]-ar[p]) <= k)curmmax++;
        else curmmax=1;
        if(curmmax>res)res=curmmax;
        p++;
    }
    // cout<<"res: ";
    cout<<ar.size()-res<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}