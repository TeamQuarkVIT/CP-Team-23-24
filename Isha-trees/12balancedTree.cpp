#include <iostream>
#include <cmath>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to calculate the height of a subtree
int getHeight(TreeNode* root) {
    if (!root) return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

// Function to check if a binary tree is balanced
bool isBalanced(TreeNode* root) {
    if (!root) return true;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    // Check if the subtree heights differ by more than 1
    if (abs(leftHeight - rightHeight) > 1) {
        return false;
    }

    // Recursively check the balance of left and right subtrees
    return isBalanced(root->left) && isBalanced(root->right);
}

// Example usage
int main() {
    // Creating a balanced binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    if (isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}
