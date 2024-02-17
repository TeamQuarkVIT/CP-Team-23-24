
bool isBSTUtil(Node* root, int minValue, int maxValue) {
    if (root == nullptr) {
        return true;
    }

    if (root->data < minValue || root->data > maxValue) {
        return false;
    }

    return isBSTUtil(root->left, minValue, root->data - 1) &&
           isBSTUtil(root->right, root->data + 1, maxValue);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}
