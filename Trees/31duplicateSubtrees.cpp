#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

string detectDuplicateSubtrees(TreeNode* root, unordered_map<string, int>& subtreeCount, unordered_set<string>& seenSubtrees) {
    if (!root) {
        return "#"; // Represent null nodes with a unique symbol
    }

    string subtreeKey = to_string(root->value) + "," +
                        detectDuplicateSubtrees(root->left, subtreeCount, seenSubtrees) + "," +
                        detectDuplicateSubtrees(root->right, subtreeCount, seenSubtrees);

    if (seenSubtrees.count(subtreeKey) > 0) {
        subtreeCount[subtreeKey]++;
    } else {
        seenSubtrees.insert(subtreeKey);
    }

    return subtreeKey;
}

bool hasDuplicateSubtrees(TreeNode* root) {
    unordered_map<string, int> subtreeCount;
    unordered_set<string> seenSubtrees;

    detectDuplicateSubtrees(root, subtreeCount, seenSubtrees);

    for (const auto& entry : subtreeCount) {
        if (entry.second >= 2) {
            return true;
        }
    }

    return false;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(4);
    root->right->left->left = new TreeNode(4);

    if (hasDuplicateSubtrees(root))
        cout << "The tree has duplicate subtrees." << endl;
    else
        cout << "The tree does not have duplicate subtrees." << endl;

    

    return 0;
}
