class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        //eiher do this with stack or reverse add reverse
        int carry=1;
        
        stack<Node*>s;
        
        Node* p=head;
        while(p){
            s.push(p);
            p=p->next;
        }
        
        while(!s.empty()){
            Node* p = s.top();
            p->data=p->data+carry;
            carry = p->data/10;
            p->data= (p->data)%10;
            s.pop();
        }
        
        if(carry){
            Node* newhead= new Node(1);
            newhead->next=head;
            return newhead;
        }
        return head;
        
    }
};