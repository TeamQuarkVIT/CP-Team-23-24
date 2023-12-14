class Solution {
    public Stack<Integer> insertAtBottom(Stack<Integer> St, int X) {
        Stack<Integer> s=new Stack<>();
        int n=St.size();
        for(int i=0;i<n;i++){
            s.push(St.peek());
            St.pop();
        }
        St.push(X);
        for(int i=0;i<n;i++){
            St.push(s.peek());
            s.pop();
        }
        return St;
    }
}
