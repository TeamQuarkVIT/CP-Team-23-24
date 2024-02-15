/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;
    }
    
    int diameter(Node* root) {
        if(root==NULL)
        return 0;
        
        int left=diameter(root->left);
        int right=diameter(root->right);
        int both=height(root->right)+height(root->left)+1;
        return max(both,max(right,left));
    }
};