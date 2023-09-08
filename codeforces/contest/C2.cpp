    #include<bits/stdc++.h>
    using namespace std;
    #define MAX 999
    #define mod 998244353
    #define ll long long 



ll total=0;
    
// dp0 , dp2
// res, noofze
pair<ll, ll> dfs( int i,  unordered_map<int, vector<pair<int , int>>>& ma, int n ,  vector<vector<ll>>&dp, ll onebef ,ll res){
    

    if(dp[i][3]==1){
        // cout<<"VIsited"<<i+1<<"total"<<total<<endl;
        // total = (total +  (dp[i][0] + (dp[i][1] * dp[i][2])%mod)%mod)%mod; // res + 1s before * 0s after

        return make_pair(dp[i][0], dp[i][2]);

    }



    ll ones=onebef;
    ll res1=0;
    ll ze=0;
    
    dp[i][1]=ones;


    // cout<<"ones"<<ones<<endl;
    // cout<<"res"<<res1<<endl;
    

    dp[i][3]=1;

    for(auto par: ma[i]){
        int v2= par.first;
        int enu= par.second;

            if(enu==0){
                ze= (ze+1)%mod ;
                res1 = (res1 + ones)%mod ;
                                
            }

            if(enu==1){
                ones= (ones+1)%mod ;
            }

            pair<ll,ll>temp= dfs(v2 , ma,n,dp, ones, res1 );

            ze = (ze+ temp.first)%mod ;
            res1 = (res1 + temp.second)%mod ;

            // ze= ( ze + dfs(v2 , ma,n,dp, ones, res1 ).second ) % mod ;

            // res1= ( res1 + dfs(v2 , ma,n,dp, ones, res1 ).first ) % mod ;



    }
    

    dp[i][0]=res1;

    
    // dp[i][1]=ones;
    dp[i][2]=ze;


    // cout<<"ze after "<<i+1<<" " <<ze<<endl;
    // cout<<endl;
    // cout<<endl;

    // total = (total +  (dp[i][0] + (dp[i][1]*dp[i][2])%mod )%mod)%mod;

    return make_pair(dp[i][0], dp[i][2]);

}

    int main(){
        // vector<int>arr;
        int n;
        cin>>n;
        // vector<vector<int>>G (n ,vector<int>(n, MAX) ) ;

        unordered_map<int, vector<pair<int , int>>> map;


        vector<vector<ll>>dp(n, {0,0,0,0});


        ll onesofar=0; 
        ll res=0;

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

        

        total = dfs(0,map, n, dp, 0, 0).first;
        
        std::cout<<total<<endl;

        return 0;
    }