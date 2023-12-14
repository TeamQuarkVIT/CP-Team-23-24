bool isCircular(Node *head)
{
   // Your code here
   Node* p=head;
   while(p){
       p=p->next;
       if(p==head)return true;
   }
   return false;
}