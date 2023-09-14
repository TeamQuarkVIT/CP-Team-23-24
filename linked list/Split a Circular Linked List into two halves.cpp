void splitList(Node *head, Node **head1_ref, Node **head2_ref) {
    if (head == NULL || head->next == head) {
        *head1_ref = head;
        *head2_ref = NULL;
        return;
    }

    Node* slow = head;
    Node* fast = head;
    while (fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (fast->next->next == head) {
        fast = fast->next;
    }
    *head1_ref = head;
    *head2_ref = slow->next;
    fast->next = slow->next;
    slow->next = head;
}