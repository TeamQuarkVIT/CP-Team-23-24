#include <iostream>
#include <queue>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool check(TreeNode* root) {
    if (!root)
        return true;  // An empty tree has all leaf nodes at the same level

    queue<TreeNode*> q;
    q.push(root);
    int level = 0;
    int leafLevel = -1;

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; ++i) {
            TreeNode* current = q.front();
            q.pop();

            if (!current->left && !current->right) {
                if (leafLevel == -1) {
                    leafLevel = level;
                } else if (level != leafLevel) {
                    return false;
                }
            }

            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }

        level++;
    }

    return true;
}

int main() {
    // Example 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    cout << "Example 1: " << (check(root1) ? "true" : "false") << endl;

    delete root1;

    TreeNode* root2 = new TreeNode(10);
    root2->left = new TreeNode(20);
    root2->right = new TreeNode(30);
    root2->left->left = new TreeNode(10);
    root2->left->right = new TreeNode(15);
    cout << "Example 2: " << (check(root2) ? "true" : "false") << endl;

    delete root2;

    return 0;
}
