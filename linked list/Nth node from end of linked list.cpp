class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        Node* curr=head;
        int count=0;
        while(curr!=NULL){
            curr=curr->next;
            count++;
        }
        if(n>count)
        return -1;
        if(n==count)
        return head->data;
        int s=count-n;
        curr=head;
        while(s--){
            curr=curr->next;
        }
        return curr->data;
    }
};