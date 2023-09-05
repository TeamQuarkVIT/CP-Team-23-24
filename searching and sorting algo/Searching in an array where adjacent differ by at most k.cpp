int search(int arr[], int n, int x, int k){
    for(int i=0;i<n;){
        if(arr[i]==x)
        return i;
        i=i+max(1,abs(arr[i]-x)/k);
    }
    return -1;
}    	