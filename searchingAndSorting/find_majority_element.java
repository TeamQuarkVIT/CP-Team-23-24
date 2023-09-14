class Solution
{
    static int majorityElement(int a[], int size)
    {
        // your code here
        int max=a[0];
        for (int i=0;i<size;i++){
            if(max<a[i]){
                max=a[i];
            }
        }
        
        int []freq=new int[max+1];
        
        for (int i=0;i<size;i++){
            freq[a[i]]++;
        }
        
        int i;
        for (i=0;i<max+1;i++){
            if(freq[i]>size/2 & freq[i]>0 ){
                return i;
            }
        }
       // System.out.print(size/2);
        
        return -1;
    }
}
