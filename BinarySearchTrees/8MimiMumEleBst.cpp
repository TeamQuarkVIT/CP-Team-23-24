int findMin(Node* root) {
    if (root == nullptr) {
        return -1;
    }

    while (root->left != nullptr) {
        root = root->left;
    }

    return root->data;
}