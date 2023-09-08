#include<bits/stdc++.h>
#define mod 998244353
using namespace std;


int main(){
    int na;

    int nb;

    cin>>na;

    vector<int>arra(na);

    for(int i=0; i<na; i++){
        cin>>arra[i];
    }

    map<int, int>ma;


    for(int i=0; i<na; i++){
        int temp;
        cin>>temp;
        ma[arra[i]]=temp;
        // cout<<"ma"<<arra[i]<<" "<<ma[arra[i]]<<endl;
    }







    cin>>nb;
    vector<int>arrb(nb);

    for(int i=0; i<nb; i++){
        cin>>arrb[i];
    }

    map<int, int>mb;

    for(int i=0; i<nb; i++){
        int temp;
        cin>>temp;
        mb[arrb[i]]=temp;
    }



    

    
    std::map<int, int>::iterator it1 = ma.begin();
    std::map<int, int>::iterator it2 = mb.begin();


    long long res=1;

    
    while(it1 != ma.end()  && it2 != mb.end())
    {   
        if(it1->first == it2->first){
            // cout<<"nei"<<it1->first<< it1->second << it2->second<<endl;

            if(it2->second > it1->second){
                cout<<0<<endl;
                return 0;
            }

            else if( it2->second < it1->second ) {
                res = (res*2)%mod;
                // cout<<"s"<<it1->first<<endl;
            }

            it1++;
            it2++;
        }




        else if(it1->first > it2->first){
            cout<<0<<endl;
            return 0;
        }




        else {
            res = (res*2)%mod;
            // cout<<"this"<<it1->first<<endl;
            it1++;
        }
        

    }

    if(it2!=mb.end()){
        cout<<0<<endl;
        return 0;
    }



    while(it1!= ma.end()){
        res = (res*2)%mod;
        // cout<<"s"<<it1->first<<endl;
        it1++;
    }
    

    cout<<res;

    

    return 0;
}