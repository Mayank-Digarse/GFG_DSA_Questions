vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>ans;
  
  if(root != NULL){
      postOrder(root->left);
      postOrder(root->right);
      cout<<(root->data)<<" ";
      return ans;
  }
}
