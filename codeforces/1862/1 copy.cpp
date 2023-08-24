#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    if(m<4){
        cout<<"NO"<<endl;
        return ;
    }
    vector<vector<char>>grid(n, vector<char>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    // // horizontal v i k a

    int len= 0;
    string key= "vika";
    bool found=false;
    

    for(int i=0; i<n; i++){
        
        if(grid[i][0]==key[len]){
            bool cuurentcol=true;

            for(int j=0; j<m; j++){
                if(grid[i][0]!=key[len]){cuurentcol=false;break;}
            }
        }

        

        
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         vector<char>tem;
    //         char temp ;
    //         cin >> temp;
    //         if(temp=='v' || temp=='i' || temp=='k' || temp=='a'){
    //             tem.push_back(temp);
    //         }
    //         grid.push_back(tem);

    //     }
    // }

    // for(int i=0; i<grid.size() ; i++){
    //     if( grid[i][o] == {'v','i','k','a'}){

    //     }
    // }





    

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}