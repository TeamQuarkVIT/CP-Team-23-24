#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int mid=n/2;
	int i=mid;
	int count=1;
	while(i>=1){
		if(s[i-1]==s[i]){
			count++;
		}
		else{
			break;
		}
		i--;
		
	}
	int j=mid;
	while(j<=n-1){
		if(s[j]==s[j+1]){
			count++;
		}
		else{
			break;
		}
		j++;
	}
	cout<<count<<"\n";
		
	
}

int main() {
	long long n;
	cin>>n;
	while(n--){
		solve();
		}
	
	// your code goes here
	return 0;
}

