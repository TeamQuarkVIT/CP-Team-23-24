class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int n=0;
        Node* h=head;
        
        while(h){
            h=h->next;
            n++;
        }
        Node* res=head;
        for(int i=0; i<n/2 ; i++){
            res=res->next;
        }
        return res->data;
    }
};