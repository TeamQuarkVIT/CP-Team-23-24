#include <iostream>
#include <cmath>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool isSumTreeHelper(TreeNode* root, bool& isSumTree) {
    if (!root) {
        return 0;  
    }

    if (!root->left && !root->right) {
        return root->value;  // Leaf nodes are considered as Sum Trees
    }

    int leftSum = isSumTreeHelper(root->left, isSumTree);
    int rightSum = isSumTreeHelper(root->right, isSumTree);

    if (root->value != (leftSum + rightSum)) {
        isSumTree = false;
    }

    return root->value + leftSum + rightSum;
}

bool isSumTree(TreeNode* root) {
    bool isSumTree = true;  // Initially assume it's a Sum Tree
    isSumTreeHelper(root, isSumTree);
    return isSumTree;
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(4);

    if (isSumTree(root)) {
        cout << "The binary tree is a Sum Tree." << endl;
    } else {
        cout << "The binary tree is not a Sum Tree." << endl;
    }

    delete root;

    return 0;
}
