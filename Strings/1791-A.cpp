#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
	char c;
	cin>>c;
	string x="codeforces"
	for(auto i:x){
		if(i==c){
			cout<<"yes"<<"\n";
			return;
		}
	}
	cout<<"no"<<"\n";
		
	
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

