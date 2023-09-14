class Compute  
{ 
    static void sortBySetBitCount(Integer arr[], int n)
    { 
        // Your code goes here
        int freq[]=new int[n];
        int count=0,r=0,t;
        for(int i=0;i<n;i++){
            t=arr[i];
            while(t>0){
                r=t%2;
                t=(int)(t/2);
                if(r==1){
                    count++;
                }
            }
            freq[i]=count;
            count=0;
        }
        int[] a=new int[n];
        int k=0,max=0;
        for(int i=0;i<n;i++){
            
            max=freq[0];
            k=0;
            for (int j=0;j<n;j++){
                if(max<freq[j]){
                    max=freq[j];
                    k=j;
                }
            }
            freq[k]=-1;
            a[i]=arr[k];
        }
        for(int i=0;i<n;i++){
            arr[i]=a[i];
        }
        
    } 
}
