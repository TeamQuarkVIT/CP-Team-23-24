class Solution
{
    //Function to merge the arrays.
    public static void merge(long arr1[], long arr2[], int n, int m) 
    {
        // code here
        long[] A=new long[n+m];
        for (int i=0;i<n;i++){
            A[i]=arr1[i];
        }
        for (int i=0;i<m;i++){
            A[i+n]=arr2[i];
        }
        
        Arrays.sort(A);
        for (int i=0;i<n+m;i++){
            if(i<n){
                arr1[i]=A[i];
            }else{
                arr2[i-n]=A[i];
            }
        }
    }
}
