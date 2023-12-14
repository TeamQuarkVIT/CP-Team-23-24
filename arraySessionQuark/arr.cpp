#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,3,4,5,6,7,8,9,10,11,12};


    int length= sizeof(arr1)/sizeof(arr1[0]);

    for(int i=0; i<length; i++){



        cout<<arr1[i]<<"--";
        //  cout<< *(arr1+i)



        cout<< *(arr1+i)<<" "<<endl;
    }

    // cout<<arr1[0];  //what should be the output?






    return 0;
}