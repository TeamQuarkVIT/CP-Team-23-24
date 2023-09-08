#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;

    int LCS=0;

    for(int i=0;i<a.length();i++){
        // int len=0;
        for(int j=0;j<b.length();j++){
            // cout<<a[i]<<" "<<b[j]<<endl;
            if(a[i]==b[j]){
                int len=0;
                while(i+len<a.length() && j+len<b.length() &&  a[i+len] == b[j+len])len++;  
                
                LCS= max(len, LCS);
            }
        }
    }
    cout<<a.length()+ b.length() -LCS -LCS<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}