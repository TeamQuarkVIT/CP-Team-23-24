class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> x;
        int firsts=0;
        int lasts=0;
        int firsto=-1;
        int lasto=-1;
        int firste=nums.size()-1;
        int laste=nums.size()-1;
        int mfirst=(firsts+firste)/2;
        int mlast=(lasts+laste)/2;
        while(firste>=firsts || laste>=lasts){
            if(firste>=firsts)
            {
                if(nums[mfirst]>target){
                    firste=mfirst-1;
                }
                else if(nums[mfirst]<target){
                    firsts=mfirst+1;
                }
                else{
                    firsto=mfirst;
                    firste=mfirst-1;
                }
                mfirst=(firsts+firste)/2;
            }
            if(laste>=lasts){
                if(nums[mlast]>target){
                    laste=mlast-1;
                }
                else if(nums[mlast]<target){
                    lasts=mlast+1;
                }
                else{
                    lasto=mlast;
                    lasts=mlast+1;
                }
                mlast=(lasts+laste)/2;
            }
        }
        x.push_back(firsto);
        x.push_back(lasto);
        return x;
        }
};
