#include <iostream>
#include <climits>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Helper function to find the largest subtree sum and update the overall maximum
int findLargestSubtreeSum(TreeNode* root, int& maxSubtreeSum) {
    if (!root) {
        return 0;
    }

    // Recursively calculate the sum of left and right subtrees
    int leftSum = findLargestSubtreeSum(root->left, maxSubtreeSum);
    int rightSum = findLargestSubtreeSum(root->right, maxSubtreeSum);

    // Calculate the sum of the current subtree
    int subtreeSum = leftSum + rightSum + root->value;

    // Update the overall maximum subtree sum
    maxSubtreeSum = max(maxSubtreeSum, subtreeSum);

    // Return the sum of the current subtree for the parent nodes
    return subtreeSum;
}

int largestSubtreeSum(TreeNode* root) {
    if (!root) {
        return 0;
    }

    int maxSubtreeSum = INT_MIN;
    findLargestSubtreeSum(root, maxSubtreeSum);

    return maxSubtreeSum;
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(2);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(-25);
    root->right->right->left = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    int result = largestSubtreeSum(root);

    cout << "The largest subtree sum is: " << result << endl;


    return 0;
}
