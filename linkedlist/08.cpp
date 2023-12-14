class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==NULL || head->next==NULL)return head;
        
        ListNode* p=head;
        ListNode* prev=head;
        while(p->next){
            prev=p;
            p=p->next;
        }
        prev->next=NULL;
        p->next=head;
        return p;
    }
};