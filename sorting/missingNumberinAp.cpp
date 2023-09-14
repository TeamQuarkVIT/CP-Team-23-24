#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low, int high, int diff)
{
    if (high <= low)
        return INT_MAX;

    int mid = low + (high - low) / 2;

    if (arr[mid + 1] - arr[mid] != diff)
        return (arr[mid] + diff);

    if (mid > 0 && arr[mid] - arr[mid - 1] != diff)
        return (arr[mid - 1] + diff);

    if (arr[mid] == arr[0] + mid * diff)
        return binary_search(arr, mid + 1, high, diff);

 
    return binary_search(arr, low, mid - 1, diff);
}

int findMissing(int arr[], int n)
{
    int diff = (arr[n - 1] - arr[0]) / n;
    return binary_search(arr, 0, n - 1, diff);
}

int main()
{
    int arr[] = {2, 4, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The missing element is "<<findMissing(arr, n);
    return 0;
}