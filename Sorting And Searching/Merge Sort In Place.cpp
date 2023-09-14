#include <bits/stdc++.h> 

void merge(int left,int mid,int right,vector<int> &arr){
    int j=mid+1;
    int i=left;
    if(arr[mid]<arr[mid+1]){
        return;
    }
    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            i++;
        }
        else{
            int value=arr[j];
            int index=j;
            while(index!=i){
                arr[index]=arr[index-1];
                index--;
            }
            arr[i]=value;
            i++;
            j++;
            mid++;
        }
    }
}


void sortm(int l,int r,vector<int> &arr){
    if(l<r){
        int mid=l+(r-l)/2;
        sortm(0,mid,arr);
        sortm(mid+1,r,arr);
        merge(l,mid,r,arr);
    }
}
vector<int> mergeSort(vector<int> &arr)
{
    int l=0;
    int r=arr.size()-1;
    sortm(l,r,arr);
    return arr;
}
