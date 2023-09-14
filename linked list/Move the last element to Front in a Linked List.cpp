//coding ninjas
LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {
    LinkedListNode<int>* curr=head;
    if(curr->next==NULL)
    return head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    LinkedListNode<int>* temp=curr->next;
    curr->next=NULL;
    temp->next=head;
    head=temp;
    return head;
}