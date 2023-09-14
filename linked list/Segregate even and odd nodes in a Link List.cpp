class Solution {
public:
    Node* divide(int N, Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node* odd_head = NULL;
        Node* even_head = NULL;
        Node* odd = NULL;
        Node* even = NULL;
        Node* current = head;

        while (current != NULL) {
            if (current->data % 2 != 0) {
                if (odd == NULL) {
                    odd_head = current;
                    odd = current;
                } else {
                    odd->next = current;
                    odd = odd->next;
                }
            } else {
                if (even == NULL) {
                    even_head = current;
                    even = current;
                } else {
                    even->next = current;
                    even = even->next;
                }
            }
            current = current->next;
        }

        if (even_head != NULL) {
            even->next = odd_head;
            if (odd != NULL) {
                odd->next = NULL; 
            }
            return even_head;
        } else {
            return odd_head;
        }
    }
};