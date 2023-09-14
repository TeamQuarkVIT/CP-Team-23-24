class Solve {
    int[] findTwoElement(int arr[], int n) {
        // code here
         ArrayList<Integer> a=new ArrayList<>();
        int max=arr[0];
        int sum=0;
        for (int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            sum=sum+arr[i];
        }
        int []a1=new int[2];
        int freq[]=new int[max+1];
        for (int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        a1[1]=max+1;
        
        for (int i=0;i<max+1;i++){
            if(freq[i]>1){
                a1[0]=i;
            }
            if(freq[i]==0 & i>0){
                a1[1]=i;
            }
        }
        
        return a1;
    }
}
