#include<bits/stdc++.h>
using namespace std;
#define N 140


bool isDigit( char ch){
    return (ch >= '0' && ch <= '9');
}



bool isvalid(int i, int j){
    return (i >= 0 && i <N && j >= 0 && j<N);
}




vector<int>ro={0, 0,1,1, 1,-1,-1,-1};
vector<int>co={1,-1,0,1,-1, 0, 1,-1};



int bfs(vector<vector<char>>arr, int i , int j){
    int res=1;
    vector<vector<char>>copy=arr;

    for(int d=0; d<8; d++){
        int I=i+ro[d];
        int J=j+co[d];

        if(isvalid(I,J)){
            if(isDigit(arr[I][J]) && copy[I][J]){
                copy[I][J]=0;
                int number1=0;

                int index=J;

                int r=index,l=index;
                while(isDigit(arr[I][r])){
                    r++;
                }
                r--;
                
                while(isDigit(arr[I][l])){
                    l--;
                }
                l++;

                int numberlen=r-l+1;
                for(int k=0; k<numberlen; k++){
                    int index=l+k;
                    number1*=10;
                    number1+=arr[I][index]-'0';
                    copy[I][index]=0;
                }

                res*=number1;
                cout<<"\n----"<<number1<<endl;



            }
        }
    }
    return res;
}


bool check(vector<vector<char>>arr, int i , int j){
    vector<vector<char>>copy=arr;
    int num=0;
    for(int d=0; d<8; d++){
        int I=i+ro[d];
        int J=j+co[d];

        if(isvalid(I,J)){
            if(isDigit(copy[I][J])){
                num++;
                int index=J;
                int temp=index;
                while(isDigit(copy[I][temp])){
                    copy[I][temp]=0;
                    temp++;
                }

                index--;
                temp=index;
                while(isDigit(copy[I][temp])){
                    copy[I][temp]=0;
                    temp++;
                }
            }
        }
    }

    return (num==2);
}


void solve(){
    int res=0;
    vector<vector<char>>arr(N, vector<char>(N,0));
    string s;

    for(int i = 0; i < N;i++){
            string temp;
            cin >> temp;
        for(int j = 0; j < N;j++){
            arr[i][j]=temp[j];
        }
    }



    for(int i=0 ; i< N ; i++){
        for(int j=0; j<N; j++){
            if(arr[i][j]=='*'){
                bool isSurroundedByTwoNumbers = false;
                isSurroundedByTwoNumbers=check(arr,i,j);
                if(isSurroundedByTwoNumbers){
                    res+=bfs(arr,i,j);
                }
            }
        }
    }


            
    cout<<"\n\n\n"<<res<<"\n\n"<<endl;


    
}
int main(){
    
    solve();

    return 0;
}