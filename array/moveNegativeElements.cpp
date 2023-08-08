#include<bits/stdc++.h>
using namespace std;
// Array Move all the negative elements to one side of the array

// time complexity: O(N)
// space complexity: O(1)

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    vector<int>arr = {1,-2,23,-111,4,54,67,-134,-342,14,235,-36,23,78,-1233};
    int left = 0; 
    int cur=0 ;

    while(cur<arr.size()){
        if(arr[cur]<0){
            swap(arr[cur],arr[left++]);
        }
        cur++;
    }

    for(int i: arr){
        cout<<i<<" "<<endl;
    }
    return 0;
}