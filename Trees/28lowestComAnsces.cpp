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

// Helper function to find the path from the root to a given node
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

// Main function to find the Lowest Common Ancestor (LCA) of two nodes
TreeNode* findLowestCommonAncestor(TreeNode* root, int node1, int node2) {
    vector<TreeNode*> path1, path2;

    // Find paths from the root to the two nodes
    if (!findPath(root, node1, path1) || !findPath(root, node2, path2)) {
        return nullptr; // One or both nodes not present in the tree
    }

    TreeNode* lca = nullptr;

    // Find the LCA by iterating through the paths
    for (int i = 0; i < min(path1.size(), path2.size()); i++) {
        if (path1[i]->value == path2[i]->value) {
            lca = path1[i];
        } else {
            break; // Break if a difference is encountered
        }
    }

    return lca;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    int node1 = 5, node2 = 1;

    TreeNode* lca = findLowestCommonAncestor(root, node1, node2);

    if (lca) {
        cout << "The Lowest Common Ancestor of nodes " << node1 << " and " << node2 << " is: " << lca->value << endl;
    } else {
        cout << "No common ancestor found for nodes " << node1 << " and " << node2 << endl;
    }

    delete root;

    return 0;
}
