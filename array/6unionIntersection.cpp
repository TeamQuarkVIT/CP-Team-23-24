#include<bits/stdc++.h>
using namespace std;
// Find union and intersection of two sorted arrays

// time complexity = O(N)
// space complexity = O(1)

vector<int> findUnion(vector<int>arr1, vector<int>arr2){
    vector<int> temp;
    int p1=0;
    int p2=0;

    while(p1+p2< arr1.size() + arr2.size()) {

        if(arr1[p1]==arr2[p2]){temp.push_back(arr1[p1]);p1++;p2++;}

        while(arr1[p1]< arr2[p2]){
            temp.push_back(arr1[p1]);
            p1++;
        }
        while(arr1[p1]> arr2[p2]){
            temp.push_back(arr2[p2]);
            p2++;
        }


    }

    return temp;


}

vector<int> findIntersection(vector<int>arr1, vector<int>arr2){
    vector<int> temp;
    int p1=0;
    int p2=0;

    while(p1+p2< arr1.size() + arr2.size()) {

        if(arr1[p1]==arr2[p2]){temp.push_back(arr1[p1]);p1++;p2++;}

        while(arr1[p1]< arr2[p2])p1++;
        while(arr1[p1]> arr2[p2])p2++;


    }

    return temp;
}


int main(){
    vector<int> arr1 = {1,2,3,6,7,8,9,10,15};
    vector<int> arr2 = {3,4,8,9,12,13,15};
    
    vector<int>u = findUnion(arr1, arr2);
    cout<<"Union : ";
    for(int i : u){
        cout<<i<<" ";
    }

    cout<<"\n\n"<<endl;


    vector<int>intersection = findIntersection(arr1, arr2);
    cout<<"Intesection : ";
    for(int i : intersection){
        cout<<i<<" ";
    }

    return 0;
}