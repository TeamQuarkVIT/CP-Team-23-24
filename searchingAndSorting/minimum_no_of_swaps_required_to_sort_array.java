class Solution
{
    //Function to find the minimum number of swaps required to sort the array.
    public int minSwaps(int nums[])
    {
        // Code here
        int count=0;
        int[][] a=new int [nums.length][2];
        for(int i=0;i<nums.length;i++){
            a[i][0]=nums[i];
            a[i][1]=i;
        }
        int  max=0,k=0;
        for(int i=0;i<nums.length-1;i++){
            max=a[i][0];
            k=i;
            for(int j=i+1;j<nums.length;j++){
                if(max>a[j][0]){
                    max=a[j][0];
                    k=j;
                }
            }
            int []temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
        count=0;
        for(int i=0;i<nums.length;i++){
             if(a[i][1]!=i){
                 int temp[]=a[i];
                 a[i]=a[a[i][1]];
                 a[a[i][1]]=temp;
                 count++;
             }
         }
         
        return count/2;
        
    }
}
