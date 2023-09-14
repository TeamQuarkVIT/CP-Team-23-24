#include <bits/stdc++.h> 
int missingNumber(vector<int> &arr, int n) 
{
    int diff=(arr[n-1]-arr[0])/n;
    int high=n-1;
    int low=0;
    while(high>=low){
        int mid=low+(high-low)/2;
        if((arr[mid]-arr[0])/diff==mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[high]+diff;
}

