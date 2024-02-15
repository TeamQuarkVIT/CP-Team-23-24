/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        return 1;
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
       int heightDiff = abs(height(root->left) - height(root->right));

        return left && right && heightDiff <= 1;
    }
};