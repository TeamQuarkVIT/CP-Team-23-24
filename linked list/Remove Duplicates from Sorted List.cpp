class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      if (!head)
      return head;
      ListNode* curr=head;
      while(curr!=NULL){
        if(curr->next !=NULL && curr->val==curr->next->val){
          ListNode* temp=curr->next->next;
          delete (curr->next);
          curr->next=temp;
        }
        else{
          curr=curr->next;
        }
      }
      return head;
    }
};