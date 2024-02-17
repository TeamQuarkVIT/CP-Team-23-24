#include <iostream>
#include <queue>
#include <map>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void diagonalTraversal(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    map<int, vector<int>> diagonalMap;

    q.push(root);

    while (!q.empty()) {
        TreeNode* currentNode = q.front();
        q.pop();

        while (currentNode) {
            diagonalMap[currentNode->val].push_back(currentNode->val);

            if (currentNode->left) q.push(currentNode->left);

            currentNode = currentNode->right;
        }
    }

    // Print the diagonal elements
    cout << "Diagonal Traversal: ";
    for (const auto& entry : diagonalMap) {
        for (int value : entry.second) {
            cout << value << " ";
        }
    }
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

    diagonalTraversal(root);

    return 0;
}
