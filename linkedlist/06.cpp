Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node* p1=head;
    Node* p2=p1->next;
    
    while(p1){
        p2=p1->next;
        while(p2 && p2->data==p1->data)p2=p2->next;
        p1->next=p2;
        p1=p2;
    }
    return head;
}