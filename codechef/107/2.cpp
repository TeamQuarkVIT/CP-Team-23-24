#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    
        string chef;
        string oppo;

    cin>>chef;
    cin>>oppo;

    int score=0;

    for(int i=0; i<n; i++){
        char c=chef[i];
        char o=oppo[i];

        if(c==o)continue;

        else if(c=='R'){
            if(o=='P')score--;
            else if(o=='S')score++;
        }

        else if(c=='P'){
            if(o=='S')score--;
            else if(o=='R')score++;
        }

        else if(c=='S'){
            if(o=='R')score--;
            else if(o=='P')score++;
        }


    }

    if(score>0){
        cout<<0<<endl;
    }

    else {
        score=-score;
        cout<<ceil((float)(score+1)/2)<<endl;
    }
        
    
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}