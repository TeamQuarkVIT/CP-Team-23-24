class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* p=head1;
        Node* q=head2;
        
        Node* prev= new Node(0); // head is actual nhead->next;
        Node* nhead=prev;
        
        while(p && q){
            int a= p->data;
            int b= q->data;
            
            if(a==b){
                Node* cur = new Node(a);
                prev->next=cur;
                prev=cur;
                p=p->next;
                q=q->next;
            }
            
            
            while(p && p->data<b){
                p=p->next;
            }
            
            while(q && q->data<a){
                q=q->next;
            }
            
        }
        return nhead->next;
    }
};
