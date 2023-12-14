#include<bits/stdc++.h>
using namespace std;

bool isDigit(char c){
    return (c >= '0' && c <= '9');
}

map<string, int> ma;

    // Insert some values into the map
    




int main(){
    long long reuslt=0;
    ma["one"] = 1;
    ma["two"] = 2;
    ma["three"] = 3;
    ma["four"] = 4;
    ma["five"] = 5;
    ma["six"] = 6;
    ma["seven"] = 7;
    ma["eight"] = 8;
    ma["nine"] = 9;


    while(1){
        string input;
        cin>>input;
        char dig[3]={0,0,0};
        int k=0;

        for(int i=0; i<input.length(); i++){
            bool found=false;
            if(isDigit(input[i])){
                dig[0]=input[i];
                dig[1]=input[i];
                break;
            }
            else {
                string curr="";
                // curr+=input[i];

                for(int j=i; j<i+5; j++){
                    if(j==input.length())break;
                    curr+=input[j];

                    if(ma.find(curr)!=ma.end()){
                        found=true;
                        dig[0]=ma[curr]+'0';
                        dig[1]=ma[curr]+'0';
                        // cout<<curr<<endl;

                    }
                    
                }


            }
            if(found)break;
            
        }


        for(int i=0; i<input.length(); i++){
            if(isDigit(input[i])){
                // dig[0]=i;
                // cout<<input[i]<<endl;
                dig[1]=input[i];
                // cout<<dig[i]<<endl;
            }
            else {
                string curr="";
                // curr+=input[i];
                for(int j=i; j<i+5; j++){
                    if(j==input.length()){
                        // cout<<curr<<endl;
                        // cout<<"end"<<endl;
                    }
                    curr+=input[j];

                        // cout<<curr<<endl;
                    if(ma.find(curr)!=ma.end()){
                        dig[1]=ma[curr]+'0';
                    }
                    
                }


            }
            
            
        }


        dig[2]=0;
        reuslt += atoll(dig);
        std::cout<<atoll(dig)<<"---"<<reuslt<<endl;
    }

    return 0;
}