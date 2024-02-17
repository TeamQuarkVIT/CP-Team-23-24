#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to convert a binary tree to its bracketed string representation
string treeToBracketString(TreeNode* root) {
    if (!root) {
        return "";
    }

    string result = to_string(root->val);

    if (root->left || root->right) {
        result += "(" + treeToBracketString(root->left) + ")";
    }

    if (root->right) {
        result += "(" + treeToBracketString(root->right) + ")";
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
    root->right->right = new TreeNode(6);

    // Convert binary tree to bracketed string
    string bracketedString = treeToBracketString(root);

    // Print the bracketed string representation
    cout << "Bracketed String: " << bracketedString << endl;

    return 0;
}
