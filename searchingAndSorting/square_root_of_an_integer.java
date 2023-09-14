class Solution
{
     long floorSqrt(long x)
	 {
		// Your code here6
		long num=1;
		for (long i=1;i<x;i++){
		    if(x>=i*i){
		        num=i;
		    }else{
		        break;
		    }
		}
		return num;
	 }
}
