// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node* inorderSuccessor;
//     Node* inorderPredecessor;

//     Node(int value) : data(value), left(nullptr), right(nullptr), inorderSuccessor(nullptr), inorderPredecessor(nullptr) {}
// };

void populateInorderSuccessorPredecessor(Node* root, Node*& predecessor, Node*& successor) {
    if (root == nullptr) {
        return;
    }
    populateInorderSuccessorPredecessor(root->right, predecessor, successor);
    root->inorderPredecessor = predecessor;
    if (predecessor != nullptr) {
        predecessor->inorderSuccessor = root;
    }
    predecessor = root;
    populateInorderSuccessorPredecessor(root->left, predecessor, successor);
}