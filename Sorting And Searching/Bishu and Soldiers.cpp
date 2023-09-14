#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0; i<n ;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	long long int pre[n+1] = {0};
	
	for(int i=1; i<=n; i++)
	{
	    pre[i] = pre[i-1] + a[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
	    long long int x;
	    cin>>x;
	    int idx = upper_bound(a,a+n,x) - a;
	    cout<<idx<<" "<<pre[idx]<<" ";
	}
	return 0;
}

