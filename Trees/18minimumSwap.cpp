#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSwapsToBST(vector<int>& arr) {
    int n = arr.size();

    vector<pair<int, int>> indexedArr(n);
    for (int i = 0; i < n; ++i) {
        indexedArr[i] = {arr[i], i};
    }

    sort(indexedArr.begin(), indexedArr.end());

    vector<bool> visited(n, false);
    int swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (visited[i] || indexedArr[i].second == i) {
            continue;
        }

        int cycleSize = 0;
        int j = i;

        while (!visited[j]) {
            visited[j] = true;
            j = indexedArr[j].second;
            cycleSize++;
        }

        swaps += (cycleSize - 1);
    }

    return swaps;
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9, 10, 11};

    int swaps = minSwapsToBST(arr);

    cout << "Minimum number of swaps to convert to BST: " << swaps << endl;

    return 0;
}
