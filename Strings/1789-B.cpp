#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s;
	int n;
	cin>>n;
	cin>>s;
	int i=0,inv=0;
	int j=n-1;
	while(i<=j){
		if(inv==0){
			if(s[i]!=s[j]){
				inv=1;
				//one inversion already occured
			}
			while(s[i]!=s[j] && i<=j){
				//can continue to invert as long as it is continous 
				i++;j--;
			}
			
		}
		else{
			if(s[i]!=s[j]){
				cout<<"no"<<"\n";
				return;
			}
		}
		i++,j--;
		
	}
	cout<<"yes"<<"/n";
		
	
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

