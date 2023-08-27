#include<bits/stdc++.h>
using namespace std;

void solve(){
    string pattern="FBFFBFFB";
    pattern=pattern+pattern+pattern;
    // pattern+=pattern;

    int k;
    cin>>k;
    string che;
    cin>>che;

    // maxlen= 8+10;
    bool flag=false;

    for(int i=0; i<8; i++){
        int len=0;
        // int p=i;

        while(pattern[i+len]==che[len]){
            len++;
            if(len==k)break;
        
        }
        if(len==k){flag=true;
                    break;}

        
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}