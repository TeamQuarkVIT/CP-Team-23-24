class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        // iterative
        if(!head)return head;
        struct Node* prev=NULL;
        struct Node* cur=head;
        struct Node* nex=head->next;
        
        while(cur){
            nex=cur->next;
            cur->next= prev;
            prev=cur;
            cur=nex;
        }
        
        return prev;
        
        
    }
    
};