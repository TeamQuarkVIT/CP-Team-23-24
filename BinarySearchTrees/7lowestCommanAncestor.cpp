Node* lowestCommonAncestor(Node* root, int p, int q) {
    while (root != nullptr) {
        if (root->data > p && root->data > q) {
            root = root->left;
        } else if (root->data < p && root->data < q) {
            root = root->right;
        } else {
            return root;
        }
    }

    return nullptr; 
}