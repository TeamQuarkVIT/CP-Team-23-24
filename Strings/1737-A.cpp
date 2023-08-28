#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s;
	string ans="";
	int n,k;
	cin>>n>>k;
	cin>>s;
	unordered_map<char,int>mpp;
	for(auto i:s){
		mpp[i]++;
	}
	
	for(int i=0;i<k;i++){
		int len=n/k;
		for(char j='a';j<='z';j++){
			if(len<=0){
				ans+=j;
				break;
			}
			len--;
			if(mpp[j]){
				mpp[j]--;
			}
			else{
				ans+=j;
				break;
			}
		}
	}
	cout<<ans<<"\n";
		
	
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

