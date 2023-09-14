class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return head;
        while(current!=NULL){
            ListNode* forward = current->next ;
            current->next=prev;
            prev = current;
            current = forward;
        }
       
        return prev;
    }
};