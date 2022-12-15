
class Solution{
    public:
    
  
    int isSumProperty(Node *root)
    {
         int sum = 0;
        if(root == NULL){ return 1;}
        if(root->left == NULL && root->right== NULL){ return 1;}
        if(root->left != NULL){
            sum += root->left->data;
        }
        if(root-> right != NULL){
            sum += root->right->data;
        }
        if(sum != root->data){
            return 0;
        }
        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};
