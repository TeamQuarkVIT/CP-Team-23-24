    #include<bits/stdc++.h>
    using namespace std;
    #define MAX 999
    #define mod 998244353

    


    void dfs( int i,  vector<vector<int>>&S, int n , vector<int>&arr){
        // iterate each edge of vertex i that is directed away from it
        for(int j = 0; j < n; j++) {
            if(S[i][j]!=MAX){
                arr.push_back(S[i][j]); // add the integer in the edge to the end of Z
                // enu = (enu+1)%2;
                dfs( j, S, n , arr ); // recurse to the next vertex
            }
        }
    }

    int main(){
        vector<int>arr;
        int n;
        cin>>n;
        vector<vector<int>>G (n ,vector<int>(n, MAX) ) ;

        for(int i=0 ; i< n ; i++){
            int nev;
            cin>>nev;

            for(int j=0 ; j< nev ; j++){
                int v2,enu;
                cin>>v2>>enu;
                G[i][v2-1]=enu;
            }
        }

        dfs(0,G,n , arr);

        vector<int>sum(arr.size(),0);
        long long onesofar=0; 
        long long res=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                onesofar=( onesofar+1)%mod;
            }
            else {
                // arr[i]=onesofar;
                res= (res+onesofar)%mod;

            }
        }
        cout<<res<<endl;

        return 0;
    }