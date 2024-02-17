#include <iostream>
#include <queue>
#include <map>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Structure to store node information along with horizontal distance
struct NodeInfo {
    TreeNode* node;
    int horizontalDistance;

    NodeInfo(TreeNode* n, int hd) : node(n), horizontalDistance(hd) {}
};

// Main function to print the bottom view of a binary tree
void bottomView(TreeNode* root) {
    if (!root) {
        return;
    }

    map<int, int> bottomViewMap;  // Map to store the bottom view nodes with their horizontal distance

    queue<NodeInfo> q;
    q.push({root, 0});

    while (!q.empty()) {
        NodeInfo current = q.front();
        q.pop();

        bottomViewMap[current.horizontalDistance] = current.node->value;

        if (current.node->left) {
            q.push({current.node->left, current.horizontalDistance - 1});
        }

        if (current.node->right) {
            q.push({current.node->right, current.horizontalDistance + 1});
        }
    }

    // Print the bottom view nodes
    for (const auto& entry : bottomViewMap) {
        cout << entry.second << " ";
    }

    cout << endl;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(8);
    root->right = new TreeNode(22);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(25);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(14);

    cout << "Bottom view of the binary tree: ";
    bottomView(root);

    // Clean up memory
    // (You should have a proper memory cleanup mechanism in a real application)
    delete root;

    return 0;
}
