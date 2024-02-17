vector<int> printLeftView(TreeNode<int>* root) {
    // Write your code here.
      std::vector<int> result;

    if (!root) return result;

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        // Traverse the current level and store the leftmost friend's number
        for (int i = 0; i < size; ++i) {
            TreeNode* current = q.front();
            q.pop();

            // If it's the first friend in the current level, add their number to the result
            if (i == 0) {
                result.push_back(current->val);
            }

            // Add the left and right friends to the queue
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }

    return result;
}