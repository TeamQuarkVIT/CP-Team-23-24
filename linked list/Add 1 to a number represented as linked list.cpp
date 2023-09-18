class Solution
{
    private:
    void insertAtTail(Node* &head,Node* &tail,int digit){
        Node* temp=new Node(digit);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
    }
    Node* reverse(Node* head){
        if(head->next==NULL)
        return head;
        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        head=reverse(head);
        Node* ansHead=NULL;
        Node* ansTail=NULL;
        int carry=1;
        while(head!=NULL||carry!=0){
            int val1=0;
            if(head!=NULL)
            val1=head->data;

            int sum= val1 + carry;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            if(head!=NULL)
            head=head->next;
        }
        ansHead=reverse(ansHead);
        return ansHead;
        
    }
};