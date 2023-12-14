class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int>se;
        
        Node* p=head;
        while(p){
            se.insert(p->data);
            Node* temp=p;
            while(temp && se.find(temp->data) != se.end()){
                temp=temp->next;
            }
            p->next=temp;
            p=temp;
            
        }
        return head;
    }
};