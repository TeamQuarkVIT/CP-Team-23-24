#include<bits/stdc++.h>
using namespace std;
#define N 140


bool isDigit( char ch){
    return (ch >= '0' && ch <= '9');
}

bool isSymbol(char ch){
    if(isDigit(ch))return false;
    if(ch=='.')return false;
    else return true;
}

bool isvalid(int i, int j){
    return (i >= 0 && i <N && j >= 0 && j<N);
}




vector<int>ro={0, 0,1,1, 1,-1,-1,-1};
vector<int>co={1,-1,0,1,-1, 0, 1,-1};




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



    for(int i = 0; i < N; i++){
        int l=0,r=0;

        while(l < N){
            if(isDigit(arr[i][l])){
                bool isPart=false;

                r=l;
                while(isDigit(arr[i][r]))r++;
                r--;
                
                int numberlen=r-l+1;

                int number=0;
                
                for(int k=0; k<numberlen+2; k++){
                    int index=l+k-1;
                    
                    // if(isvalid(i,index)){
                    //     if(isDigit(arr[i][index])){
                    //         number*=10;
                    //         number+=arr[i][index]-'0';
                    //     }
                    //     // check all 8 sides of arr[i][index]
                    //     for(int d=0; d<8; d++){
                    //         int I=index+ro[d];
                    //         int J=index+co[d];

                    //         if(isvalid(I,J)){
                    //             if(isSymbol(arr[I][J]))isPart=true;
                    //         }
                    //     }
                    // }


                    if(isvalid(i,index)){
                        if(isDigit(arr[i][index])){
                            number*=10;
                            number+=arr[i][index]-'0';
                        }
                        // check all 8 sides of arr[i][index]
                        for(int d=0; d<3; d++){
                            int rowNumber=i+d-1;
                            if(isvalid(rowNumber,index)){
                                if(isSymbol(arr[rowNumber][index]))isPart=true;
                            }
                        }
                    }





                    // check valid index i j;
                    // chek up and down row and current row


                }
                if(isPart==true){res+=number;cout<<"----"<<number<<endl;}

                
                l=r+1;

            }
            else l++;
        }
    }


            
    cout<<"\n\n\n"<<res<<"\n\n"<<endl;


    
}
int main(){
    
    solve();

    return 0;
}