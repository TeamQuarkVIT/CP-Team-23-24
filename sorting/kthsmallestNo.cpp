#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={72, 19, 54, 88, 41, 67, 2, 90, 36, 14, 78, 26, 49, 96, 93, 7, 63, 62, 50, 32, 76, 30, 10, 38, 80, 24, 85, 31, 58, 15, 29, 89, 4, 20, 45, 98, 61, 21, 11, 70, 27, 64, 91, 34, 56, 68, 9, 6, 87}; 
    sort(arr.begin(), arr.end());
    int k=3;
    cout<<"Kth Smallest element ="<<arr[k-1]<<endl;
    return 0;
}