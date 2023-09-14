class Solution {
    
    public pair indexes(long v[], long x)
    {
        // Your code goes here
        int count=0,f=0,l=0,flag=0;
        for (int i=0;i<v.length;i++){
            if(v[i]==x){
                count++;
                f=i;
                if(count==1){
                    flag=1;
                    l=i;
                }
            }
        }
        if(flag==0){
            f=-1;
            l=-1;
        }
        pair p=new pair(l,f);
        return p;
    }
}
