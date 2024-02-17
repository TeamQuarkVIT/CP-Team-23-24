
// struct TreeNode {
//     int data;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
// };

void inorderTraversal(TreeNode* root, std::vector<int>& nodes) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left, nodes);
    nodes.push_back(root->data);
    inorderTraversal(root->right, nodes);
}

void updateNodes(TreeNode* root, const std::vector<int>& nodes, int& index) {
    if (root == nullptr) {
        return;
    }

    updateNodes(root->left, nodes, index);
    root->data = nodes[index++];
    updateNodes(root->right, nodes, index);
}

void binaryTreeToBST(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::vector<int> nodes;
    inorderTraversal(root, nodes);
    std::sort(nodes.begin(), nodes.end());

    int index = 0;
    updateNodes(root, nodes, index);
}

