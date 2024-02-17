#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

pair<int, int> findLongestBloodline(TreeNode* root) {
    if (!root) {
        return {0, 0};  // sum, length
    }

    pair<int, int> leftBloodline = findLongestBloodline(root->left);
    pair<int, int> rightBloodline = findLongestBloodline(root->right);

    if (leftBloodline.second > rightBloodline.second) {
        return {leftBloodline.first + root->value, leftBloodline.second + 1};
    } else {
        return {rightBloodline.first + root->value, rightBloodline.second + 1};
    }
}

int sumOfLongestBloodline(TreeNode* root) {
    pair<int, int> longestBloodline = findLongestBloodline(root);
    return longestBloodline.first;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(8);

    int result = sumOfLongestBloodline(root);

    cout << "Sum of the longest bloodline: " << result << endl;

    delete root;

    return 0;
}
