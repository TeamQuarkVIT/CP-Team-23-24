#include<bits/stdc++.h>
using namespace std;
// Find the maximum and minimum element in an arraY

//time complexity : O(n)
//space complexity : O(1)

void minMax(vector<int>arr){
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i : arr){
        if(i < min)min = i;
        if(i > max)max = i;
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
}

int main(){
    vector<int> arr ={1,2,-3,4,5,86,7,10};
    minMax(arr);
    return 0;
}