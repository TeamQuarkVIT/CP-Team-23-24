#include<bits/stdc++.h>
using namespace std;

int main(){

    // There are many different ways 
    // to initialize/declare a Array
    int arr1[]={1,2,-3,4,-5,6,7};
    int arr2[10];


    int n=9;
    int arr[n];

                
    int studentMarks[][3]= {    {1,2,3} ,
                                {4,5,6} ,
                                {7,8,9} ,
                                {10,11,12}};


    for(int i=0;    i<sizeof(studentMarks)/sizeof(studentMarks[0])    ;i++){

        for(int j=0;    j<sizeof(studentMarks[0])/sizeof(studentMarks[0][0])  ;j++){

            cout<<studentMarks[i][j]<<" ";
        }
        cout<<endl;
    }
















    int threeDarray[][4][3]={   {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}, 
                                {{1,2,3},{4,5,6},{7,8,9},{10,11,12}},  
                                {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}, };




    


    int len = sizeof(arr1)/sizeof(arr1[0]);
    
    // for(int i=0; i<=len; i++){
    //     cout<<arr1[i]<<" ";
    // }
    

    

    





    return 0;
}