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

TreeNode* findLCA(TreeNode* root, int node1, int node2) {
    vector<TreeNode*> path1, path2;

    if (!findPath(root, node1, path1) || !findPath(root, node2, path2)) {
        return nullptr; // One or both nodes not present in the tree
    }

    TreeNode* lca = nullptr;

    for (int i = 0; i < min(path1.size(), path2.size()); i++) {
        if (path1[i]->value == path2[i]->value) {
            lca = path1[i];
        } else {
            break; // Break if a difference is encountered
        }
    }

    return lca;
}

int findDistanceToAncestor(TreeNode* root, int nodeValue, int& distance) {
    if (!root) {
        return -1;
    }

    if (root->value == nodeValue) {
        return 0;
    }

    int leftDistance = findDistanceToAncestor(root->left, nodeValue, distance);
    int rightDistance = findDistanceToAncestor(root->right, nodeValue, distance);

    if (leftDistance >= 0 || rightDistance >= 0) {
        distance = max(leftDistance, rightDistance) + 1;
        return distance;
    }

    return -1;
}

int findMinDistanceBetweenNodes(TreeNode* root, int node1, int node2) {
    TreeNode* lca = findLCA(root, node1, node2);

    if (!lca) {
        return -1; // One or both nodes not present in the tree
    }

    int distanceNode1 = -1;
    int distanceNode2 = -1;

    findDistanceToAncestor(lca, node1, distanceNode1);
    findDistanceToAncestor(lca, node2, distanceNode2);

    return (distanceNode1 >= 0 && distanceNode2 >= 0) ? distanceNode1 + distanceNode2 : -1;
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

    int minDistance = findMinDistanceBetweenNodes(root, node1, node2);

    if (minDistance >= 0) {
        cout << "The minimum distance between nodes " << node1 << " and " << node2 << " is: " << minDistance << endl;
    } else {
        cout << "One or both nodes not present in the tree." << endl;
    }

    delete root;

    return 0;
}
