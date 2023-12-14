#include<bits/stdc++.h>
using namespace std;

int main(){
    // user will give lenght of array and array itself
    // output: largest element in the array

    int n;
    cout<<"Enter length of array:";

    cin>>n;

    int arr[n];

    cout<<"ENter array:"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i<<"th element:";
        cin>>arr[i];
    }
    

    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }

    int maxSoFar = arr[0]; 
    /// 4 5 6 7 8 9 10 7 8 8 

    for(int i=0; i<n; i++){
        if(arr[i]>maxSoFar){
            maxSoFar = arr[i];
        }
    }



    cout<<"Maximum element in the array: "<<maxSoFar<<endl;
    


    return 0;
}