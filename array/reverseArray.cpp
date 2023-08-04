#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp =a;
    a=b;
    b=temp;
}

void reverse(vector<int>&A){
    for(int i=0; i<A.size()/2; i++){
        swap(A[i],A[A.size()-1-i]);
    }
}



int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    
    for(int i: arr){
        cout<<" "<<i;
    }
    reverse(arr);

    cout<<"\n--------------------------------"<<endl;
    for(int i: arr){
        cout<<" "<<i;
    }
    
    return 0;
}