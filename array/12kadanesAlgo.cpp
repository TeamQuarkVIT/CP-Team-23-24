class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unsigned int i=0;
        while(true){
            
            if(nums[i]!=i+1){
                if(nums[i]!=nums[nums[i]-1])
                {
                int temp= nums[nums[i]-1];
                nums[nums[i]-1]=nums[i];
                nums[i]=temp;
                }
                else {return nums[i];}
            }
            else {i++;}
       }

    }
    // vector<int> a=nums;
    // sort(nums.begin(),nums.end());
    // return ((int)*(std::adjacent_find(nums.begin(), nums.end())));
    // }



};