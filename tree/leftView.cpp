/* A binary tree node

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

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int> View;
    if (root == NULL)
        return View;

    queue<Node*> Q;
    Q.push(root);

    while (!Q.empty()) 
    {
        int currLevelNodeCount = Q.size();

        for (int i = 1; i <= currLevelNodeCount; i = i + 1) 
        {
            Node* curr = Q.front();
            Q.pop();
            if (i == 1)
                View.push_back(curr->data);

            if (curr->left != NULL)
                Q.push(curr->left);

            if (curr->right != NULL)
                Q.push(curr->right);
        }
    }

    return View;
}