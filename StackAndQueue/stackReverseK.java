class GfG {
    // Function to reverse first k elements of a queue.
    public Queue<Integer> modifyQueue(Queue<Integer> q, int k) {
        // add code here.
        Stack<Integer> stk=new Stack<>();
        int n=q.size();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(i<k){
                stk.push(q.poll());
            }else{
                arr.add(q.poll());
            }
        }
        for(int i=0;i<n;i++){
            if(i<k){
                q.offer(stk.pop());
            }else{
                q.offer(arr.get(i-k));
            }
        }
        return q;
    }
}
