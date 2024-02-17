#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

TreeNode* buildTreeHelper(
    const vector<int>& inorder, int inStart, int inEnd,
    const vector<int>& preorder, int& preIndex,
    unordered_map<int, int>& inorderIndex) {

    if (inStart > inEnd) {
        return nullptr;
    }

    int currentValue = preorder[preIndex++];
    TreeNode* root = new TreeNode(currentValue);

    int inIndex = inorderIndex[currentValue];

    root->left = buildTreeHelper(inorder, inStart, inIndex - 1, preorder, preIndex, inorderIndex);
    root->right = buildTreeHelper(inorder, inIndex + 1, inEnd, preorder, preIndex, inorderIndex);

    return root;
}

TreeNode* buildTree(const vector<int>& inorder, const vector<int>& preorder) {
    unordered_map<int, int> inorderIndex;

    for (int i = 0; i < inorder.size(); ++i) {
        inorderIndex[inorder[i]] = i;
    }

    int preIndex = 0;
    return buildTreeHelper(inorder, 0, inorder.size() - 1, preorder, preIndex, inorderIndex);
}

void printPostorder(TreeNode* root) {
    if (!root) {
        return;
    }

    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->value << " ";
}

int main() {
    vector<int> inorder1 = {1, 6, 8, 7};
    vector<int> preorder1 = {1, 6, 7, 8};

    TreeNode* root1 = buildTree(inorder1, preorder1);

    cout << "Postorder traversal for Example 1: ";
    printPostorder(root1);
    cout << endl;

    delete root1;


    return 0;
}
