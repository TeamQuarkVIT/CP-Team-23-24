class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s="";
        ListNode* curr=head;
        while(curr!=NULL){
            s.push_back(curr->val);
            curr=curr->next;
        }
        int st=0,e=s.length()-1;
        while(e>st){
            if(s[e]!=s[st])
            return false;
            st++;
            e--;
        }
        return true;
    }
};