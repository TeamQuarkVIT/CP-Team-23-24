#include <iostream>
using namespace std;

void RotateRight(int arr[], int n, int p2, int cur)
{
    char tmp = arr[cur];
    for (int i = cur; i > p2; i--)
        arr[i] = arr[i - 1];
    arr[p2] = tmp;
}
 
void helper(int arr[], int n)
{
    int p2 = -1;

    for (int i = 0; i < n; i++) {
        if (p2 >= 0) {
            if (((arr[i] >= 0) && (arr[p2] < 0)) || ((arr[i] < 0) && (arr[p2] >= 0))) 
            {
                RotateRight(arr, n, p2, i);

                if (i - p2 >= 2)
                    p2 = p2 + 2;
                else
                    p2 = -1;
            }
        }

        if (p2 == -1) {
            if (((arr[i] >= 0) && (!(i & 0x01))) || ((arr[i] < 0) && (i & 0x01)))
            {
                p2 = i;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main()
{

    int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Input array: \n";
    printArray(arr, n);
    helper(arr, n);
    cout << "\nOutput array: \n";
    printArray(arr, n);
    return 0;
}