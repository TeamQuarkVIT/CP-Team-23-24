#include<bits/stdc++.h>
using namespace std;

int main(){
    // Check if the array is sorted or not

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
        cout<<arr[i]<<" ";
    }


    bool flag= true;

    // 1 6 3 4 5 6 7 8 9 10 11 

    for(int i=0; i<n-1; i++){ 
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }





    if(flag){
        cout<<"Sorted"<<endl;
    }
    else cout<<"NOt sorted"<<endl;
    



    
    return 0;
}