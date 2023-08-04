// this code is solution for problem GFG
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void sort012(int a[], int n)
    {
        // code here
        int right = n - 1;
        int left = 0;
        int mid = 0;
        while (mid <= right)
        {
            if (a[mid] == 0)
            {
                swap(a[left++], a[mid++]);
            }
            else if (a[mid] == 2)
            {
                swap(a[right--], a[mid]);
            }
            else
                mid++;
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends