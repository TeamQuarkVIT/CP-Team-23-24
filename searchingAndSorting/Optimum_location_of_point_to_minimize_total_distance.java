//incomplete satisfy only some test cases
class Solution {
    public static double findOptimumCost(int[] line, int n, int[][] points) {
        // code here
        int[][] footpoint=new int[n][2];
        int den=line[0]*line[0]+line[1]*line[1];
        for(int i=0;i<points.length;i++){
            footpoint[i][0]=-((line[0]*points[i][0]+line[1]*points[i][1]+line[2])*line[0])/den+points[i][0];
            footpoint[i][1]=-((line[0]*points[i][0]+line[1]*points[i][1]+line[2])*line[1])/den+points[i][1];
        }
        double min=0;
        int flag=1;
        for(int i=0;i<footpoint.length;i++){
            double sum=0;
            double distance=0;
            for(int j=0;j<footpoint.length;j++){
                double sqdis =(points[j][0]-footpoint[i][0])*(points[j][0]-footpoint[i][0])+(points[j][1]-footpoint[i][1])*(points[j][1]-footpoint[i][1]);
                distance=Math.sqrt(sqdis);
                sum=sum+distance;
            }
            if(flag==1){
                min=sum;
            }
            if(min>sum){
                min=sum;
            }
            flag=0;
            
        }
        
        return min;
    }
}
