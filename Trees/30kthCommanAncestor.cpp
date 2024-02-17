#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool findPath(TreeNode* root, int key, vector<TreeNode*>& path) {
    if (!root) {
        return false;
    }

    path.push_back(root);

    if (root->value == key) {
        return true;
    }

    if ((root->left && findPath(root->left, key, path)) || (root->right && findPath(root->right, key, path))) {
        return true;
    }

    path.pop_back();
    return false;
}

TreeNode* findKthCommonAncestor(TreeNode* root, int node1, int node2, int k) {
    vector<TreeNode*> path1, path2;

    if (!findPath(root, node1, path1) || !findPath(root, node2, path2)) {
        return nullptr; // One or both nodes not present in the tree
    }

    int commonAncestorValue = -1;

    for (int i = 0; i < min(path1.size(), path2.size()) && i < k; i++) {
        if (path1[i]->value == path2[i]->value) {
            commonAncestorValue = path1[i]->value;
        } else {
            break; // Break if a difference is encountered
        }
    }

    return (commonAncestorValue != -1) ? new TreeNode(commonAncestorValue) : nullptr;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    int node1 = 5, node2 = 1, k = 2;

    TreeNode* commonAncestor = findKthCommonAncestor(root, node1, node2, k);

    if (commonAncestor) {
        cout << "The " << k << "-th common ancestor of nodes " << node1 << " and " << node2 << " is: " << commonAncestor->value << endl;
    } else {
        cout << "No common ancestor found for nodes " << node1 << " and " << node2 << " at depth " << k << endl;
    }

    delete root;
    delete commonAncestor;

    return 0;
}
