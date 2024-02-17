#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void findKSumPaths(TreeNode* root, int k, vector<int>& path, vector<vector<int>>& result) {
    if (!root)
        return;

    path.push_back(root->value);

    int sum = 0;
    for (int i = path.size() - 1; i >= 0; i--) {
        sum += path[i];
        if (sum == k) {
            result.push_back(vector<int>(path.begin() + i, path.end()));
        }
    }

    findKSumPaths(root->left, k, path, result);
    findKSumPaths(root->right, k, path, result);

    path.pop_back();
}

vector<vector<int>> kSumPaths(TreeNode* root, int k) {
    vector<vector<int>> result;
    vector<int> path;
    findKSumPaths(root, k, path, result);
    return result;
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(-3);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(11);
    root->left->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(-2);
    root->left->right->right = new TreeNode(1);

    int k = 8;

    vector<vector<int>> kSumPathsResult = kSumPaths(root, k);

    cout << "K-sum paths for k = " << k << " are:" << endl;
    for (const auto& path : kSumPathsResult) {
        cout << "[";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i];
            if (i < path.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    // Clean up memory
    // (You should have a proper memory cleanup mechanism in a real application)
    delete root;

    return 0;
}
