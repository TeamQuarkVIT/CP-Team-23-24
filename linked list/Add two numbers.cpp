class Solution {
    private:
    void insertAtTail(ListNode* &head,ListNode* &tail,int digit){
        ListNode* temp=new ListNode(digit);
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
    ListNode* reverse(ListNode* head){
        if(head->next==NULL)
        return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        int carry=0;
        while(l1!=NULL ||l2!=NULL ||carry!=0){
            int val1=0;
            if(l1!=NULL)
            val1=l1->val;
            int val2=0;
            if(l2!=NULL)
            val2=l2->val;

            int sum= val1 +val2+ carry;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        ansHead=reverse(ansHead);
        return ansHead;
    }
};