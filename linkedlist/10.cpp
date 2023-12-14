
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        stack<struct Node*>s1;
        stack<struct Node*>s2;
        int carry=0;
        
        struct Node* p=first;
        while(p){
            s1.push(p);
            p=p->next;
        }
        
        p=second;
        while(p){
            s2.push(p);
            p=p->next;
        }
        
        struct Node* prev= NULL;
        
        while(!s1.empty() && !s2.empty()){
            int a= s1.top()->data;
            s1.pop();
            int b= s2.top()->data;
            s2.pop();
            
            
            
            struct Node* curr= new Node( (a+b+carry)%10 );
            carry= (a+b+carry)/10;
            
            curr->next=prev;
            prev=curr;
        }
        
        while(!s1.empty()){
            int a= s1.top()->data;
            s1.pop();
            
            struct Node* curr= new Node( (a+carry)%10 );
            carry= (a+carry)/10;
            
            curr->next=prev;
            prev=curr;
        }
        
        while(!s2.empty()){
            int a= s2.top()->data;
            s2.pop();
            
            struct Node* curr= new Node( (a+carry)%10 );
            carry= (a+carry)/10;
            
            curr->next=prev;
            prev=curr;
        }
        
        if(carry>0){
            struct Node* curr= new Node( (carry)%10 );
            
            curr->next=prev;
            prev=curr;
        }
        
        return prev;
        
        
        
        
        
    }
};