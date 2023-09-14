class Solution {
    public int pivotIndex(int[] nums) {
        int sumi=0,sum=0;
        for (int i=0;i<nums.length;i++){
            sum=sum+nums[i];
        }

        for (int i=0;i<nums.length;i++){
            if(sum-nums[i]==2*sumi){
                return i;
            }
            sumi=sumi+nums[i];
        }
        return -1;
    }
}
