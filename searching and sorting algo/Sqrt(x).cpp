class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
        return x;
        int s=0,e=x;
        int mid;
        while(e>=s){
            mid=s+(e-s)/2;
            if(mid ==x/mid)
            return mid;
            else if(mid > x/mid)
            e=mid-1;
            else
            if (x/(mid + 1) < mid+1) return mid;
                else s= mid + 1;
        }
        return mid;
    }
};