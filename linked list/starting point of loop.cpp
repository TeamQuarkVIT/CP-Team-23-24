class Solution {
    private:
    ListNode* hasCycle(ListNode *head) {
       ListNode* slow=head;
       ListNode* fast = head;
    if(head==NULL)
    return NULL;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow)
        return slow;
    }
    return NULL; 
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* intersection=hasCycle(head);
        if(intersection==NULL)
        return NULL;
        ListNode* slow= head;
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
        return slow;
    }
};