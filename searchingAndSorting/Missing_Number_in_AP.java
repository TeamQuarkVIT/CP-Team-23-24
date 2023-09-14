class Solution {
    int findMissing(int[] arr, int n) {
        // code here
        Arrays.sort(arr);
        int d=(arr[n-1]-arr[0])/n;
        int sum=arr[0];
        for(int i=1;i<n;i++){
            sum=sum+d;
            if(arr[i]!=sum){
                break;
            }
        }
        return sum;
    }
}
