class GfG{
    //Function to reverse the queue.
    public Queue<Integer> rev(Queue<Integer> q){
        //add code here.
        if(!q.isEmpty()){
            int a=q.peek();
            q.poll();
            rev(q);
            q.offer(a);
        }
        return q;
    }
}
