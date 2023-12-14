class GfG {
    public Stack<Integer> sort(Stack<Integer> s) {
        //add code here.
        int[] arr = new int[s.size()];
        int n = s.size();
        for (int i = 0; i < n; i++) {
            arr[i] = s.peek();
            s.pop();
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            s.push(arr[i]);
        }
        return s;
    }
}
