#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to check if a node is a leaf node
bool isLeaf(TreeNode* node) {
    return node && !node->left && !node->right;
}

// Function to perform left boundary traversal
void leftBoundaryTraversal(TreeNode* root, vector<int>& result) {
    if (!root || isLeaf(root)) {
        return;
    }

    result.push_back(root->val);

    if (root->left) {
        leftBoundaryTraversal(root->left, result);
    } else if (root->right) {
        leftBoundaryTraversal(root->right, result);
    }
}

// Function to perform right boundary traversal
void rightBoundaryTraversal(TreeNode* root, vector<int>& result) {
    if (!root || isLeaf(root)) {
        return;
    }

    if (root->right) {
        rightBoundaryTraversal(root->right, result);
    } else if (root->left) {
        rightBoundaryTraversal(root->left, result);
    }

    result.push_back(root->val);
}

// Function to perform leaf node traversal
void leafNodeTraversal(TreeNode* root, vector<int>& result) {
    if (!root) {
        return;
    }

    if (isLeaf(root)) {
        result.push_back(root->val);
        return;
    }

    leafNodeTraversal(root->left, result);
    leafNodeTraversal(root->right, result);
}

// Function for boundary traversal of a binary tree
vector<int> boundaryTraversal(TreeNode* root) {
    vector<int> result;

    if (root) {
        result.push_back(root->val);
        leftBoundaryTraversal(root->left, result);
        leafNodeTraversal(root->left, result);
        leafNodeTraversal(root->right, result);
        rightBoundaryTraversal(root->right, result);
    }

    return result;
}

// Example usage
int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);

    vector<int> result = boundaryTraversal(root);

    cout << "Boundary Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
