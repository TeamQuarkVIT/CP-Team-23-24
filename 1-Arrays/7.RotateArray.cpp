#include<iostream>
#include<algorithm>
using namespace std;

printArray(int *arr,int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void rotate(int arr[], int n)
{
    reverse(arr, arr+n-1);
    reverse(arr, arr+n);
}

int main(){

   int a[] = {12,12,4443,12,76,87,1};
   int n = sizeof(a)/sizeof(int);
   rotate(a,n);
  printArray(arr,n);
  
}
