#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s;
	vector<int> ans;
	cin>>s;
	int n=s.length();
//	if(n==1){
//		cout<<0<<" "<<0<<"\n";
//		cout<<0<<"\n";
//		return; 
//	}
	vector<pair<char,int>> v;
	int dir=0;
	if(s[0]>s[n-1]){
		dir=1;
	}
	for(int i=0;i<n;i++){
		v.push_back(make_pair(s[i],i));
	}
	sort(v.begin(), v.end());
	if(dir==1){
		reverse(v.begin(), v.end());
	}
	int flag=0;
	long long jumps=0;
	long long energy =0;
//	for (int i=0; i<n; i++){
//		cout<<v[i].first<<" "<<v[i].second<<"\n";
//	}
	for (int i=0; i<n; i++)
    {
        if(flag==0 &&v[i].second==0){
        	jumps++;
        	flag=1;
        	ans.push_back(v[i].second+1);
		}
		else if(flag==1){
			jumps++;
			energy+=int(v[i].second)-int(v[i-1].first);
			ans.push_back(v[i].second+1);
			if(v[i].second==n-1){
				break;
			}
		}
    }
    cout<<abs(energy)<<" "<<jumps<<"\n";
    for(auto i:ans){
    	cout<<i<<" ";
	}
	cout<<"\n";
		
	
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

