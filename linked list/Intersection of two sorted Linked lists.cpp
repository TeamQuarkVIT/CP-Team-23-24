Node* findIntersection(Node* head1, Node* head2)
{
    Node* curr1=head1;
    Node* curr2=head2;
    Node* intersecHead = NULL;
    Node* intersecTail = NULL;
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->data==curr2->data){
            if (intersecHead == NULL){
                intersecHead = new Node(curr1->data);
                intersecTail = intersecHead;
            } 
            else{
                intersecTail->next = new Node(curr1->data);
                intersecTail = intersecTail->next;
            }
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        else{
            if(curr1->data > curr2->data)
            curr2=curr2->next;
            else
            curr1=curr1->next;
        }
    }
    return intersecHead;
}