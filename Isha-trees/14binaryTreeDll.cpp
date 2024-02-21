#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Definition for a doubly linked list node.
struct ListNode {
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode(int x) : val(x), prev(nullptr), next(nullptr) {}
};

// Function to convert a binary tree to a doubly linked list
ListNode* binaryTreeToDoublyLinkedList(TreeNode* root) {
    if (!root) {
        return nullptr;
    }

    ListNode* head = nullptr;  // Head of the doubly linked list
    ListNode* tail = nullptr;  // Tail of the doubly linked list

    // Helper function for in-order traversal and linking nodes
    function<void(TreeNode*)> inOrderTraversal = [&](TreeNode* node) {
        if (!node) {
            return;
        }

        inOrderTraversal(node->left);

        ListNode* listNode = new ListNode(node->val);

        if (!head) {
            head = listNode;
        }

        if (tail) {
            tail->next = listNode;
            listNode->prev = tail;
        }

        tail = listNode;

        inOrderTraversal(node->right);
    };

    // Perform in-order traversal to link nodes
    inOrderTraversal(root);

    return head;
}

// Helper function to print the doubly linked list
void printDoublyLinkedList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    // Convert binary tree to doubly linked list
    ListNode* doublyLinkedList = binaryTreeToDoublyLinkedList(root);

    // Print the doubly linked list
    cout << "Doubly Linked List: ";
    printDoublyLinkedList(doublyLinkedList);

    return 0;
}
