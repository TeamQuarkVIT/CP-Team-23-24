class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0)
            return {-1, -1};
        vector<int> output(2, -1);
        int s= 0,e= n - 1;
        int mid;
        if (nums[0] == target)
            output[0] = 0;
        else {
            while (s<=e) {
                mid = s+ (e-s) / 2;
                if (nums[mid] == target && target != nums[mid - 1]) {
                    output[0] = mid;
                    break;
                }
                else if (nums[mid] < target)
                s= mid + 1;
                else
                e= mid - 1;
            }
        }
        s=0;
        e= n - 1;
        if (nums[n - 1] == target)
            output[1] = n - 1;
        else {
            while (s<=e) {
                mid = s+ (e- s) / 2;
                if (nums[mid] == target && target != nums[mid + 1]) {
                    output[1] = mid;
                    break;
                }
                else if (nums[mid] > target)
                e= mid - 1;
                else
                s= mid + 1;
            }
        }

        return output;
    }
};