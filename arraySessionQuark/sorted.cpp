#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;

    cout<<"Enter length of array:";
    cin >> len;

    int arr[len];

    for(int i=0; i<len ; i++){
        cout<<"Enter "<<i<<"th element :";
        cin>>arr[i];
    }

    cout<<"\n Input array is:";

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";


    }


    int curr=arr[0];

    


    return 0;
}