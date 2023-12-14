#include<bits/stdc++.h>
using namespace std;

bool isDigit(char c){
    return (c >= '0' && c <= '9');
}

int main(){
    long long reuslt=0;
    while(1){
        string input;
        cin>>input;
        char dig[3]={0,0,0};
        int k=0;

        for(auto i: input){
            if(isDigit(i)){
                if(k==0){dig[k++] =i;dig[k]=i;}
                else dig[1]=i;
            }

        }
        // dig[2]=0;
        reuslt += atoll(dig);
        cout<<atoll(dig)<<"---"<<reuslt<<endl;
    }

    return 0;
}