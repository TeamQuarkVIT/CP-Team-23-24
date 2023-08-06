//Move all negative numbers to beginning and positive to end with constant extra space
#include<iostream>
#include<algorithm>
using namespace std;

printArray(int *arr,int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void SeparatePosandNeg(int *arr, int n){

    int temp;
    int i = 0;
    int j = n-1;
    while(i < j){
        if(arr[i] < 0){
            i++;
        }
        else{
            if(arr[j] < 0){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
            else{
                j--;
            }

        }
    }        
}

int main(){

    int arr[] = {-10,21,32,65,-23,-87,-9,-56};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr,n);
    SeparatePosandNeg(arr,n);
  //sort(arr, arr+n);
    printArray(arr,n);

}
