#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
   
    vector<vector<char>>grid(n, vector<char>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    // // horizontal v i k a
    if(m<4 && n<4){
        cout<<"NO"<<endl;
        return ;
    }



    // int len= 0;
    // string key= "vika";
    // // bool found=false;
    

    // for(int i=0; i<n; i++){
    //     if(grid[i][0]==key[len]){
            
    //         bool current=true;
    //         for(int j=0; j<m; j++){
    //             if(grid[i][j]!=key[len])current=false;
    //         }
    //         if(current) len++;
    //     }
    // }
    // if(len==4){
    //     cout<<"YES"<<endl;
    //     return ;
    // }




    // len=0;

    // for(int i=0; i<m; i++){
    //     if(grid[0][i]==key[len]){
    //         bool current=true;

    //         for(int j=0; j<n; j++){
    //             if(grid[j][i]!=key[len])current=false;
    //         }
    //         if(current) len++;
    //     }
    // }


    // if(len==4){
    //     cout<<"YES"<<endl;
    //     return ;
    // }


    // cout<<"NO"<<endl;

    int len= 0;
    string key= "vika";
    // // bool found=false;


    for(int i=0; i<m; i++){
        for(int j=0 ; j<n; j++){
            if(grid[j][i]==key[len]){len++; break;}
        }
    }
    if(len==4){
        cout<<"YES"<<endl;
        return ;
    }


    cout<<"NO"<<endl;



    

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}