#include <iostream>

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool isIsomorphic(TreeNode* root1, TreeNode* root2) {
    if (!root1 && !root2)
        return true;

    if (!root1 || !root2 || root1->value != root2->value)
        return false;

    return (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)) ||
           (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
}

int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(4);
    root1->left->right = new TreeNode(5);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(3);
    root2->right = new TreeNode(2);
    root2->right->left = new TreeNode(5);
    root2->right->right = new TreeNode(4);

    if (isIsomorphic(root1, root2))
        std::cout << "The trees are isomorphic." << std::endl;
    else
        std::cout << "The trees are not isomorphic." << std::endl;

    delete root1;
    delete root2;

    return 0;
}
