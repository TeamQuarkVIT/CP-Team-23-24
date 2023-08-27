#include<iostream>
using namespace std;
int main(){
    int n,k ;
    string s;
    cin>>k;
    while(k--){
        cin>>n;
        cin>>s;
        int m= n/2;
        while(m>0&&s[m]==s[m-1]){
            m--;
        }
        cout<<n-m*2<<endl;
    }
}