/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void leftSide(Node* root,vector<int>&a){
        if(root==NULL || (root->left==NULL && root->right==NULL))
        return;
        a.push_back(root->data);
        
        if(root->left)
        leftSide(root->left,a);
        else
        leftSide(root->right,a);
        
    }
    
    void bottom(Node* root,vector<int>&a){
        if(root==NULL)
        return;
        if(root->left==NULL && root->right==NULL){
            a.push_back(root->data);
            return;
        }

        bottom(root->left,a);
        bottom(root->right,a);
    }
    
    void rightSide(Node* root,vector<int>&a){
        if(root==NULL || (root->left==NULL && root->right==NULL))
        return;
        
        if(root->right)
        rightSide(root->right,a);
        else
        rightSide(root->left,a);
        
        a.push_back(root->data);
        
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(root==NULL)
        return ans;
        
        ans.push_back(root->data);
        
        leftSide(root->left,ans);
        bottom(root->left, ans);
        bottom(root->right,ans);
        rightSide(root->right,ans);
        
        return ans;
    }
};