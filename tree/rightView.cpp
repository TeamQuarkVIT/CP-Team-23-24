/* A binary tree node has data, pointer to left child
   and a pointer to right child 
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

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> right;
        if (root == NULL)
        return right;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();

            for (int i = 1; i <= size; i = i + 1) 
                {
                Node* front = q.front();
                q.pop();
                if (i == size)
                right.push_back(front->data);

                if (front->left != NULL)
                q.push(front->left);

                if (front->right != NULL)
                q.push(front->right);
            }
        }

        return right;
    }
};
