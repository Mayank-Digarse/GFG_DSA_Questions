class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int res = 0;
    int height(Node*root){
        if(root == NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        
        int height = 1+max(l ,r);
      res = max(res ,1+l+r);
        return height;
    }
    
    int diameter(Node* root) {
        // Your code here
        height(root);
        return res;
    }
};
