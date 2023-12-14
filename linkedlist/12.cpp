int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    stack<Node*>s1;
    stack<Node*>s2;
    
    Node* p = head1;
    while(p){
        s1.push(p);
        p=p->next;
    }
    
    p = head2;
    while(p){
        s2.push(p);
        p=p->next;
    }
    
    Node* last= new Node(-1);
    
    
    while(!s1.empty() && !s2.empty()){
        Node* n1= s1.top();
        Node* n2=s2.top();
        s1.pop();
        s2.pop();
        
        if(n1==n2){
            last=n1;
        }
        else return last->data;
        
    }
    return last->data;
    
    
    
    
    
    
}