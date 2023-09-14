bool isCircular(Node *head)
{
    Node* slow=head;
    Node* fast = head;
    if(head==NULL)
    return false;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow)
        return true;
    }
    return false; 
}