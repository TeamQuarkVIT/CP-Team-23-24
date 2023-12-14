class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node* slow=head;
        Node* fast=head;
        
        if(head==NULL)return;
        bool loop=false;
        while(fast && fast->next){
            fast= fast->next->next;
            slow=slow->next;
            if(slow==fast){
                loop = true;
                break;
            }
            
        }
        
        if(loop ==false)return ;
        
        slow=head;
        // Node* prev=slow;
        while(slow!=fast){
            slow=slow->next;
            // prev=fast;
            fast=fast->next;
            
        }
         Node* p = slow->next;
        while(p->next != slow)
            p = p->next;
        p->next = NULL;
        
        
        
        
    }
};