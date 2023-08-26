#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
	string input;
	int n;
	cin>>n;
	cin>>input;
	string s="";
	for(int i=0;i<50;i++){
		if(i%3==0){
			s+='F';
		}
		if(i%5==0){
			s+='B';
		}
	}
	for(int i=0;i<30-n-2;i++){
		if(s.substr(i,n)==input){
			cout<<"yes";
			return;
		}

	}
	cout<<"no";
	return;
		
		
	
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

