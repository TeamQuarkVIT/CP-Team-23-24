class Solution {
    
    public String reverse(String S){
        //code here
        Stack<Character> stk=new Stack<>();
        for(int i=0;i<S.length();i++){
            stk.push(S.charAt(i));
        }
        String s="";
        for(int i=0;i<S.length();i++){
            s=s+stk.peek();
            stk.pop();
        }
        return s;
    }

}
