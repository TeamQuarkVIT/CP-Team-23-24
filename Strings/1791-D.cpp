#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s;
	int n;
	cin>>n;
	cin>>s;
	int ans=INT_MIN;
	unordered_map<char,int>left;
	unordered_map<char,int>right;
	int i=0,j=n-1,cl=0,cr=0;
	for(int i=0;i<n;i++){
		
		if(right.find(s[i])==right.end()){
			cr++;
		}
		right[s[i]]++;
	}
	ans=cr;
	//cout<<cr<<"/n";
	i=0;
	while(i<=n-1){
		if(left.find(s[i])==left.end()){
			cl++;
			
		}
		left[s[i]]++;
		right[s[i]]--;
		if(right[s[i]]==0){
				cr--;
			}
		ans=max(ans,cl+cr);
		i++;
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

