#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int next = mid + 1;
    if (arr[mid] <= arr[next]) {
        return;
    }

    while (left <= mid && next <= right) {

        if (arr[left] <= arr[next]) {
            left++;
        }
        else {
            int value = arr[next];
            int index = next;

            while (index != left) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[left] = value;
            left++;
            mid++;
            next++;
        }
    }
}

void helperMergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        helperMergeSort(arr, l, m);
        helperMergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout <<" "<< A[i];
    cout <<"\n";
}


int main()
{
    int arr[] = { 1,26 ,4,12, 10, 39 , 11, 13, 5, 90, 100,  6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    helperMergeSort(arr, 0, arr_size - 1);

    printArray(arr, arr_size);
    return 0;
}