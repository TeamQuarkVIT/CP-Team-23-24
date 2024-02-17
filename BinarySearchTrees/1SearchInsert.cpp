struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* searchBST(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }

    if (key > root->data) {
        return searchBST(root->right, key);
    }

    return searchBST(root->left, key);
}

Node* insertBST(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->data) {
        root->left = insertBST(root->left, key);
    } else if (key > root->data) {
        root->right = insertBST(root->right, key);
    }

    return root;
}
