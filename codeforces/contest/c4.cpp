    #include<bits/stdc++.h>
    using namespace std;
    #define MAX 999
    #define mod 998244353
    #define ll long long 



ll total=0;

ll onecuont=0;

pair<ll, ll> dfs( int i,  unordered_map<int, vector<pair<int , int>>>& ma, int n ,  vector<vector<ll>>&dp  ){


    if(dp[i][3]==1){
    cout<<"dshsfoip "<< i+1<<"="<<dp[i][0]<<"--"<<dp[i][1]<<"--"<<dp[i][2]<<"--"<<dp[i][3]<<endl;

        return make_pair(dp[i][0], dp[i][2]);
    }

    // ll ones=0;
    ll res1=0;
    ll ze=0;
    
    
    
    dp[i][3]=1;


    for(auto par: ma[i]){
        int v2= par.first;
        int enu= par.second;
        pair<ll,ll>temp;

            if(enu==0){
                    // total = (total + onecuont)%mod;
                    ze=( ze+1)%mod;
                    temp= dfs(v2 , ma,n,dp );  
                    res1= (res1 +   temp.first)%mod  ;      
            }

            if(enu==1){
                // res1= (res1+1)%mod;
                onecuont = (onecuont+1)%mod;
                temp= dfs(v2 , ma,n,dp);
                res1= (res1 + (temp.first + temp.second ) )%mod;
            }


            ze = (ze + temp.second)%mod ;

            total= (total + (onecuont* temp.second)%mod)%mod ;

    }
    
    // dp[i][1]=onecuont;
    dp[i][0]=res1 ;

    total= (total + onecuont)%mod;
    dp[i][2]=ze;
    cout<<"current"<<i+1 << " "<<total<<endl;



    cout<<"dp "<< i+1<<"="<<dp[i][0]<<"--"<<dp[i][1]<<"--"<<dp[i][2]<<"--"<<dp[i][3]<<endl;
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

        

        total = dfs(0,map, n, dp).first;
        
        std::cout<<dp[0][0]<<endl;
        cout<<"Total"<<total<<endl;

        return 0;
    }