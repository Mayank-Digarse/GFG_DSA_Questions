vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>ans;
  if(root!= NULL){
      cout<<(root->data)<<" ";
      preorder(root->left);
      preorder(root->right);
      return ans;
  }
}
