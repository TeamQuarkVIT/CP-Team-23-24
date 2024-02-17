Node* findMax(Node* node) {
    while (node->right != nullptr) {
        node = node->right;
    }
    return node;
}

Node* findSuccessor(Node* root, int key) {
    Node* current = searchBST(root, key);
    if (current == nullptr) {
        return nullptr;
    }

    if (current->right != nullptr) {
        return findMin(current->right);
    } else {
        Node* successor = nullptr;
        Node* ancestor = root;

        while (ancestor != current) {
            if (current->data < ancestor->data) {
                successor = ancestor;
                ancestor = ancestor->left;
            } else {
                ancestor = ancestor->right;
            }
        }

        return successor;
    }
}

Node* findPredecessor(Node* root, int key) {
    Node* current = searchBST(root, key);
    if (current == nullptr) {
        return nullptr;
    }

    if (current->left != nullptr) {
        return findMax(current->left);
    } else {
        Node* predecessor = nullptr;
        Node* ancestor = root;

        while (ancestor != current) {
            if (current->data > ancestor->data) {
                predecessor = ancestor;
                ancestor = ancestor->right;
            } else {
                ancestor = ancestor->left;
            }
        }

        return predecessor;
    }
}
