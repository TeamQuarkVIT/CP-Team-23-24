class Solution
{
   public:
    int findSum(int A[], int N){
        int mini,maxi,i;
        if(N%2==0){
            mini=min(A[0],A[1]);
            maxi=max(A[0],A[1]);
            if(A[0]==A[1]){
               mini=A[0];
               maxi=A[0]; 
            }
            i=2;
        }
        else{
            mini=A[0];
            maxi=A[0];
            i=1;
        }
        for(i;i<N-1;i+=2){
            if(A[i]>A[i+1]){
                if(A[i]>maxi)
                maxi=A[i];
                if(A[i+1]<mini)
                mini=A[i+1];
            }
            else{
                if(A[i+1]>maxi)
                maxi=A[i+1];
                if(A[i]<mini)
                mini=A[i];
            }
        }
        return (mini+maxi);
    }
};