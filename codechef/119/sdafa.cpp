#include<bits/stdc++.h>
using namespace std;



double logab(int a, int b)
{
    return log2(a) / log2(b);
}
 

void solve(){
    int x,q;
    cin>>x>>q;
    
    while(q--){
        int p;
        cin>>p;
        // int res=0;
        // cout<<""<<endl;
        int res=0;
        
        int temp=x;
        
        int poo=1;
        int pstore=p;
            
        while(temp%p==0 && temp>p){   
            while(temp%p==0 && temp>p){
                
                // cout<<"fsfs"<<temp<<endl;
                temp=temp/p; 
                res=(res+poo)%1000000007;
                
                poo*=2;
                p*=p;
            }
            p=pstore;
            poo=1;
        }
        
        // while(temp%p==0 && temp>1){
        //     temp=temp/p; res++;
        //     // poo;
        //     // p*=p;
        // }
        
        
        
        // cout<<<<endl;
        cout<<res<<endl;
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}