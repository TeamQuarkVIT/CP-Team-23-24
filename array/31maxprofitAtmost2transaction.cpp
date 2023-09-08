// Maximum profit by buying and selling a share at most twice

#include <bits/stdc++.h>
using namespace std;

int maxtwobuysell(vector<int> arr) {
	int fb = INT_MIN;
	int fs = 0;
	int sb = INT_MIN;
	int ss = 0;
	
	for(auto i: arr) {
		
		fb = max(fb,-i);
		fs = max(fs,fb+i);
		sb = max(sb,fs-i);
		ss = max(ss,sb+i);
	
	}
	return ss;
}

int main() {

	vector<int >arr = {2, 30, 15, 10, 8, 25, 80};
	// int size = sizeof(arr)/sizeof(arr[0]);

	cout<<maxtwobuysell(arr);
	return 0;
}
