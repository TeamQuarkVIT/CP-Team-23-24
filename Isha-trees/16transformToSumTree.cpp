#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform the transformation to a sum tree in O(n) time
int toSumTree(TreeNode* root) {
    // Base case: If the node is null, return 0
    if (!root) {
        return 0;
    }

    // Recursively transform left and right subtrees
    int leftSum = toSumTree(root->left);
    int rightSum = toSumTree(root->right);

    // Store the original value of the node
    int oldValue = root->val;

    // Update the value of the current node to the sum of left and right subtrees
    root->val = leftSum + rightSum;

    // Return the updated value of the current node plus the original value
    return root->val + oldValue;
}

// Helper function to print the inorder traversal of a tree
void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

// Example usage
int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(-2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(8);
    root->left->right = new TreeNode(-4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(5);

    // Transform the binary tree to a sum tree in O(n) time
    toSumTree(root);

    // Print the inorder traversal of the sum tree
    cout << "Inorder Traversal of Sum Tree: ";
    inorderTraversal(root);

    return 0;
}
