class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,bool> visited;
        while(headA!=NULL){
            visited[headA]=true;
            headA=headA->next;
        }
        while(headB!=NULL){
            if(visited[headB]==true)
            return headB;
            headB=headB->next;
        }
        return NULL;
    }
};