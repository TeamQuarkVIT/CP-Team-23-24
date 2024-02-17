

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

TreeNode* mergeBSTs(TreeNode* root1, TreeNode* root2) {
    vector<int> nodes1, nodes2;
    
    inorderTraversal(root1, nodes1);
    inorderTraversal(root2, nodes2);

    vector<int> mergedNodes;
    mergeSortedArrays(nodes1, nodes2, mergedNodes);

    return sortedArrayToBST(mergedNodes, 0, mergedNodes.size() - 1);
}

TreeNode* sortedArrayToBST(const std::vector<int>& nodes, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(nodes[mid]);

    root->left = sortedArrayToBST(nodes, start, mid - 1);
    root->right = sortedArrayToBST(nodes, mid + 1, end);

    return root;
}

void mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2, std::vector<int>& result) {
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }
}


