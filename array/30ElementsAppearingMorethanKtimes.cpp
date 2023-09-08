// Given Array of size n and a number k, find all elements that appear more than k times

// time complexity = O(n)
// Space complexity = O(n) 
// make a frequency map


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={3, 1, 2, 2, 1, 2, 3, 8, 3};
    int k = 2;

    map<int, int>ma;

    for(auto i: arr){
        ma[i]+=1;
    }

    vector<int>res;

    for(auto i: ma){
        if(i.second>k)res.push_back(i.first);       // appearing strictly more than k times
    }
    cout<<"elements appearing more than k times"<<endl;

    for(auto i: res){
        cout<<" "<<i;
    }

    return 0;
}