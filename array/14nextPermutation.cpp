// leetcode soultion



class Solution {
public:

    void swap(int &a, int &b){
        int temp=a;
        a=b;
        b=temp;
    }

    void nextPermutation(vector<int>& nums) {
        int ptr1 = nums.size()-1;

        while(ptr1>=1 && nums[ptr1-1]>=nums[ptr1]){
            ptr1--;
        }
        if(ptr1==0){
            sort(nums.begin(), nums.end());
            // return nums;
            // cout<<"thi";
            return;
        }
        cout<<ptr1;
        int ptr2=ptr1-1;


        ptr1 = nums.size()-1;

        while(ptr1>ptr2 && nums[ptr1]<=nums[ptr2] ){
            ptr1--;
        }

        swap(nums[ptr2],nums[ptr1]);

        sort(nums.begin()+ptr2+1, nums.end());
        // return nums;






    }
};