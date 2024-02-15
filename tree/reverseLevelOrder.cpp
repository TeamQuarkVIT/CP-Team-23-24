/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    vector <int>a;
      queue <Node*> q;
      q.push(root);
      while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        a.push_back(temp->data);
         if(temp->right)
        q.push(temp->right);
        if(temp->left)
        q.push(temp->left);
      }
      int s=0,e=a.size()-1;
      while(s<e){
          swap(a[s++],a[e--]);
      }
      return a;
}