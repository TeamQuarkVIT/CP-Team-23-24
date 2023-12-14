class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL)return head;
        struct node* curr= head;
        struct node* prev= NULL;
        struct node* ne= curr->next;
        
        int i=0;
        while(curr && i<k){
            ne=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ne;
            i++;
        }
        
        
        if(ne){
            head->next = reverse(ne, k);
        }
        return prev;
    }
};
