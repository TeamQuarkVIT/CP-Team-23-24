#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x, int k)
{
	int ind= 0;
	while (ind< n)
	{
		if (arr[ind] == x) return ind;
		ind= ind+ max(1, abs(arr[ind]-x)/k);
	}

	cout << "number Not found" << endl;
	return -1;
}

// Driver program to test above function
int main()
{
	int arr[] = {2, 4, 5, 7, 7, 6};
	int x = 6;
	int k = 2;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Element " << x << " is present at index "
		<< search(arr, n, x, k);
	return 0;
}
