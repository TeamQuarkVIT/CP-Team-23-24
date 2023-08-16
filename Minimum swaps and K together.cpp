#include<iostream>
using namespace std;

int minSwap(int arr[], int n, int k) {
        int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;
    int windowSize=count;
    int greater = 0;
    for (int i = 0; i < windowSize; ++i)
        if (arr[i] > k)
            ++greater;
     
    int ans = greater,j = windowSize;
    for (int i = 0; j < n; ++i, ++j) {
        if (arr[i] > k)
            greater--;
         
        if (arr[j] > k)
            greater++;
        ans = min(ans, greater);
    }
    return ans;
    }

    int main(){
    int arr[] = {2, 1, 5, 6, 3};
    int n = 5;
    int k = 3;
    cout << minSwap(arr, n, k);
    return 0;
    }