#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int n=a.size();
	int m=b.size();
	int i=0;
	int j=0;
	int k=n-1;
	while(i<=k && m>j){
		
		if(a[i]<b[j]){
			i++;
		}
		else{
			//push the largest element in a to the next array as if you push arr[i] the larger element will be in a 
			swap(a[k--],b[j++]);
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
}
