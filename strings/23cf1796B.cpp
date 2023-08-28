#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b ;
    // if(a==b){
    //     cout<<"YES" << endl;
    //     cout<<a<<endl;
    // }

    if(a[0]==b[0]){
        cout <<"YES"<<endl;
        cout <<a[0]<<"*"<<endl;
    }
    else if(a[a.length()-1]==b[b.length()-1]){
        cout <<"YES"<<endl; 
        cout <<"*"<<a[a.length()-1]<<endl;
    }

    else {
        for(int i=0; i<a.length()-1;i++){
            for(int j=0; j<b.length()-1; j++){
                string ca="";
                string cb="";
                ca= ca + a[i] + a[i+1];
                cb= cb + b[j] + b[j+1];

                if(ca==cb){
                    cout <<"YES"<<endl;
                    cout<<"*"<<ca<<"*"<<endl;
                    return ;
                }
            }
        }
        cout<<"NO"<<endl;   
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}