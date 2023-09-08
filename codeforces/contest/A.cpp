#include<bits/stdc++.h>
using namespace std;

void solve(){
     
     


}
int main(){
    int n;
     cin>>n;
     int res=INT_MAX;

     for(int i=0; i<n; i++){
        int ten;
        cin>>ten;
        if(abs(ten)<res){
            res=abs(ten);
        }
     }
     cout<<res<<endl;
    return 0;
}