class twoStacks
{
    int top1=-1;
    int top2=-1;
    int[] arr1=new int[100];
    int[] arr2=new int[100];
    twoStacks()
    {
        
    }
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        top1++;
        arr1[top1]=x;
    }
    //Function to push an integer into the stack2.
    void push2(int x)
    {
        top2++;
        arr2[top2]=x;
    }
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1==-1){
            return -1;
        }
        else{
            top1--;
            return arr1[top1+1];
        }
    }
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(top2==-1){
            return -1;
        }
        else{
            top2--;
            return arr2[top2+1];
        }
    }
}
