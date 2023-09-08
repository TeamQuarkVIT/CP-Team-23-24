#include<bits/stdc++.h>
using namespace std;

// int res=-1;

int dfs(unordered_map<int, vector<int> >&graph, vector<int>& cgpa,bool & flag ,int v , int k , int prevmin){
    if(k==0){
        flag = true;
        // cout<<"doufs"<<prevmin<<endl;
        return min(prevmin,cgpa[v]);
    }
    prevmin=min( prevmin, cgpa[v]);

    for(auto i: graph[v]){
        prevmin= min( prevmin, dfs(graph, cgpa, flag,i, k-1, prevmin) );
    }
    
    return prevmin;

    
}   


void solve(){
    int n,e,k;
    cin>>n>>e>>k;
    unordered_map<int, vector<int> >graph;
    // unordered_map<int,int>stud;

    vector<int>cgpa(n);

    // vector<bool>vis(n,0);

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        cgpa[i]=temp;
        // stud[temp]=i;
    }
    // sort cgpa??

    // sort(cgpa.begin(),cgpa.end(), greater<int>());

    for(int i=0; i<e; i++){
        int a,b;
        cin>>a>>b;
        
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);

    }



    // for(int i=0; i<n; i++){
    //     sort(graph[i].begin(),graph[i].end(), greater<int>());
    // }



    int res=-1;
    bool found=false;

    for(int i=0; i<n; i++){
        int tempres=cgpa[i];
        bool foundt=0;
        int neighbour=tempres;




        neighbour=dfs(graph, cgpa, foundt, i, k-1, tempres);



        tempres=min(neighbour, tempres);
        // cout<<"dfa"<<tempres<<endl;

        if(foundt){res= max(res, tempres);}


        // int neigh=-1;

        // if(graph[i].size() >= k-1){
        //     found=1;
        //     // cout<<"thi"<<i<<"dss"<<cgpa[i]<<endl;
        //     tempres=cgpa[i];
        //     priority_queue<int>gpa;

        //     for(auto j : graph[i]){
        //         gpa.push(cgpa[j]);
        //     }

        //     for(int l=0; l<k-2; l++){
        //         // cout<<"topa"<<gpa.top()<<endl;
        //         gpa.pop();  
        //     }
        //     tempres= min(gpa.top(), tempres);
        //     // cout<<"tewsng"<<tempres<<endl;
            
        //     res= max(res, tempres);
        // }



        

    }
    
    cout<<res<<endl;

    
    
    
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}