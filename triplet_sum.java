class Solution
{
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    public static boolean find3Numbers(int A[], int n, int X) { 
    
       // Your code Here
        HashSet<Integer> set = new HashSet<>();
        for (int i=0;i<n;i++){
            set.add(A[i]);
        }
       for (int i=0;i<n-2;i++){
           for (int j=i+1;j<n-1;j++){
              if(set.contains(X-A[i]-A[j])&(X-A[i]-A[j]!=A[i])&(X-A[i]-A[j]!=A[j])){
                  return true;
              }
           }
       }
       return false;
    
    }
}