# include<iostream>
#include<string>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=1;i<=testcases;i++){
        string s;
        cin>>s;
        s[0]=s[s.length()-1];
        cout<<s<<endl;
    }
    return 0;
}