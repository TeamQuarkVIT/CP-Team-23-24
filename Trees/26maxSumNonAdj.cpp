#include <iostream>
#include <vector>

using namespace std;

int maxSumNonAdjacent(const vector<int>& nums) {
    int inclusive = 0;  // maximum sum including the previous element
    int exclusive = 0;  // maximum sum excluding the previous element

    for (int num : nums) {
        int temp = max(inclusive, exclusive);

        inclusive = exclusive + num;

        exclusive = temp;
    }

    return max(inclusive, exclusive);
}

int main() {
    vector<int> nums = {5, 1, 1, 5};

    int result = maxSumNonAdjacent(nums);

    cout << "Maximum sum of non-adjacent elements: " << result << endl;

    return 0;
}
