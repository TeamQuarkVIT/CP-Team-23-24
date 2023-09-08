    #include<bits/stdc++.h>
    using namespace std;
    #define MAX 999
    #define mod 998244353

    

void dfs( int i,  unordered_map<int, vector<pair<int , int>>>& map, int n , long long &oneso, long long &res){
    // iterate each edge of vertex i that is directed away from it
    
    for(auto lis: map[i]){
        int v2= lis.first;
        int enu= lis.second;

        
            // arr.push_back(S[i][j]); // add the integer in the edge to the end of Z
            // enu = (enu+1)%2;
            if(enu==0){
                res = (res+oneso )%mod;
            }
            if(enu==1){
                oneso = (oneso+1 )%mod;
            }
            dfs( v2, map, n , oneso, res); // recurse to the next vertex

    }


}

    int main(){
        // vector<int>arr;
        int n;
        cin>>n;
        // vector<vector<int>>G (n ,vector<int>(n, MAX) ) ;

        unordered_map<int, vector<pair<int , int>>> map;

        long long onesofar=0; 
        long long res=0;

        for(int i=0 ; i< n ; i++){
            int nev;
            cin>>nev;

            for(int j=0 ; j< nev ; j++){
                int v2,enu;
                cin>>v2>>enu;
                // G[i][v2-1]=enu;
                map[i].push_back(make_pair(v2-1, enu));

            }
        }

        dfs(0,map,n , onesofar, res);
        cout<<res<<endl;

        return 0;
    }