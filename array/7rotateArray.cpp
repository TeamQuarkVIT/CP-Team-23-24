#include<bits/stdc++.h>
using namespace std;



void rotateLeft(vector<int>&arr){
    int n = arr.size();
    int temp = arr[0];

    for(int i = n-1; i >=0; i--){
        int temp2 = arr[i];
        arr[i]= temp;
        temp = temp2;
    }

}


void rotateRight(vector<int>&arr){
    int n = arr.size();
    int temp = arr[n-1];

    for(int i = 0; i <n; i++){
        int temp2 = arr[i];
        arr[i]= temp;
        temp = temp2;
    }

}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    cout<<"Rotatingleft"<<endl;
    rotateLeft(arr);
    for(int i: arr){
        cout << i << "  ";
    }
    cout<<"\n\n"<<endl;


    rotateRight(arr);   //back to original array
    cout<<"Rotatingright"<<endl;
    rotateRight(arr);
    for(int i: arr){
        cout << i << "  ";
    }
    return 0;
}