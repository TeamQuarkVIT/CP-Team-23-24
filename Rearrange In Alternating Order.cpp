#include<bits/stdc++.h>
using namespace std;

int posneg(vector<int>&arr,int n) {
  
  int temp = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) swap(arr[i], arr[++temp]);
  }

  int pos = temp + 1, neg = 0;
  while (pos < n && arr[neg] < 0 && pos < neg) {
    swap(arr[pos], arr[neg]);
    pos++;
    neg += 2;
  }

}

