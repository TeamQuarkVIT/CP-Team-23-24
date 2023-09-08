#include<bits/stdc++.h>
using namespace std;
// Find the "Kth" max and min element of an array

// using stl functions 
// sort() takes time complexity of O(N log N)
// 1<=k<=N


int main(){
    vector<int>arr= {8,6,4,32,1,3,6,56,42,34,445,12,223,1200};  
    int k =2;
    sort(arr.begin(), arr.end());
    
    cout<<"kth largest and smallest "<<endl;
    cout<<k<<"th largest  ="<<arr[arr.size()-1-(k-1)]<<endl;
    cout<<k<<"th smallest ="<<arr[k-1]<<endl;

    return 0;
}