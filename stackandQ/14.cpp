// reverse stack using recrsuion

#include<bits/stdc++.h>
using namespace std;


void reverse(stack<int>&s){
    if(s.empty()) return;
    int tmp=s.top();
    s.pop();
    reverse(s);
    s.push(tmp);
    
}

int main(){
    int n;
    cin>>n; 
    stack<int>s;
    for(int i=0; i<n; i++){
        int tmep;
        cin>>tmep;
        s.push(tmep);
    }

    while(!s.empty()){
        int temp=s.top();
        s.pop();
        cout<<temp<<endl;

    }

    return 0;
}