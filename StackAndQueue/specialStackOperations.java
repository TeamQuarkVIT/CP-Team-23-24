/*Complete the function(s) below*/
class GfG{
	public void push(int a,Stack<Integer> s)
	{
	    //add code here
	    s.push(a);
	}
	public int pop(Stack<Integer> s)
        {
            //add code here.
            int temp=s.peek();
            s.pop();
            return temp;
	}
	public int min(Stack<Integer> s)
        {
           //add code here
           int min=s.peek();
           Stack stk=new Stack();
           int n=s.size();
           for(int i=0;i<n;i++){
               stk.push(s.peek());
               if(s.peek()<min){
                   min=s.peek();
               }
               s.pop();
           }
           return min;
	}
	public boolean isFull(Stack<Integer>s, int n)
        {
           //add code here.
           if(s.size()==n){
               return true;
           }
           return false;
           
	}
	public boolean isEmpty(Stack<Integer>s)
        {
           //add code here.
           if(s.size()==0){
               return true;
           }
           return false;
	}
}
