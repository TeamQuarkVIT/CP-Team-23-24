#include<bits/stdc++.h>
using namespace std;



double logab(long long a, long long b)
{
    return log2(a) / log2(b);
}
 

void solve(){
    int x,q;
    cin>>x>>q;
    
    while(q--){
        int p;
        cin>>p;
        long long res=0;
        for(long long i = 1; i <= sqrt(x); i++){
        		if(x % i == 0){
        			
        			//divisor;
        			
        			if(ceil(logab(x,i)) == floor(logab(x,i))  && floor(logab(x,i)))
        			{cout<<i<<" ";res++;}
        			
        			
        			if(i != x/i) {
        			    
        			 //   if(ceil(logab(x,i)) ==floor(logab(x,i)) )res++;
        			    //divisor
        			    if(ceil(logab(x,x/i)) == floor(logab(x,x/i)) && floor(logab(x,x/i))) {cout<<x/i<<" ";res++;}
        			}
        		}
        }
        cout<<""<<endl;
        cout<<res<<endl;
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}