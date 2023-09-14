class Solution {
public:
    int mySqrt(int x) {
        if(x==1)return 1;

        if (x == 0)
            return x;
        int first = 1, last = x/2;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            // mid * mid == x gives runtime error
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid - 1;
            }
            else {
                first = mid + 1;
            }
        }
        return last;
    }
};