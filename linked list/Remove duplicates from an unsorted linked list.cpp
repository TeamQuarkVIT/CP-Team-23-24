Node * removeDuplicates( Node *head) 
    {
        unordered_map<int,bool>visited;
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            if(visited[curr->data]==true){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else{
                visited[curr->data]=true;
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }