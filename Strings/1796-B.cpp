#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	string b;
	cin>>a;
	cin>>b;
	int n1,n2,i=0;
	n1=a.length();
	n2=b.length();
	
	while(i<min(n1,n2)){
		string ans="";
		int len=0;
		while(a[i]==b[i]){
			len++;
			i++;
			ans+=a[i];
		}
		if(len>=2){
			cout<<"YES\n";
			cout<<'*'<<ans<<'*'<<"\n";
			return;
		}
		len++;
	}
	cout<<"NO\n";
		
	
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

