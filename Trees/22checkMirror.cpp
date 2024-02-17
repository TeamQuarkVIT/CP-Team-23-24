#include <iostream>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool areMirrors(TreeNode* root1, TreeNode* root2) {
    if (!root1 && !root2) {
        return true;
    }

    if (!root1 || !root2) {
        return false;
    }

    return (root1->value == root2->value) &&
           areMirrors(root1->left, root2->right) &&
           areMirrors(root1->right, root2->left);
}

bool isSymmetric(TreeNode* root) {
    if (!root) {
        return true;  // An empty tree is symmetric
    }

    return areMirrors(root->left, root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    if (isSymmetric(root)) {
        cout << "The tree is symmetric." << endl;
    } else {
        cout << "The tree is not symmetric." << endl;
    }


    return 0;
}
