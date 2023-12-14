class Solution {
    public static int isStackPermutation(int n, int[] ip, int[] op) {
        // code here
        Stack<Integer> stk=new Stack<>();
        int j=0;
        for(int i=0;i<n;i++){
            stk.push(ip[i]);
            if(stk.peek()==op[j]){
                while(!stk.isEmpty() && stk.peek()==op[j]){
                    stk.pop();
                    j++;
                }
            }
        }
        if(j==n){
            return 1;
        }
        return 0;
    }
}
