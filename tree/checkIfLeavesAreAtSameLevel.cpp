/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    bool check(Node *root)
    {
        if (root == nullptr)
        return true;

        queue<pair<Node*, int>> q;
        int firstLeafLevel = -1;

        q.push({root, 0});

        while (!q.empty()) {
            pair<Node*, int> current = q.front();
            q.pop();

            Node* node = current.first;
            int level = current.second;

            if (node->left == nullptr && node->right == nullptr) {
                if (firstLeafLevel == -1) {
                    firstLeafLevel = level;
                } else {
                    if (level != firstLeafLevel)
                    return false;
                }
            }
            if (node->left)
            q.push({node->left, level + 1});
            if (node->right)
            q.push({node->right, level + 1});
        }
        return true;
    }
};
