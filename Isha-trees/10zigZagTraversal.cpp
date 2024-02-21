#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void zigzagTraversal(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> currentLevel;
    stack<TreeNode*> nextLevel;
    bool leftToRight = true;

    currentLevel.push(root);

    while (!currentLevel.empty()) {
        TreeNode* currentNode = currentLevel.top();
        currentLevel.pop();

        if (currentNode) {
            cout << currentNode->val << " ";

            if (leftToRight) {
                if (currentNode->left) nextLevel.push(currentNode->left);
                if (currentNode->right) nextLevel.push(currentNode->right);
            } else {
                if (currentNode->right) nextLevel.push(currentNode->right);
                if (currentNode->left) nextLevel.push(currentNode->left);
            }
        }

        if (currentLevel.empty()) {
            swap(currentLevel, nextLevel);
            leftToRight = !leftToRight;
        }
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Zigzag Traversal: ";
    zigzagTraversal(root);

    return 0;
}
