class Solution {
public:
    
    int Height(TreeNode* root){
    
       if ( root == NULL ){
          
           return 0;
    
       }
    
        int lh = Height(root->left);
    
        int rh = Height(root->right);
    
        return max( lh , rh ) + 1;

    }
    
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL){
     
            return true;
   
        }
   
   
        if ( isBalanced(root->left) == false ){
      
            return false;
   
        }
   
   
        if ( isBalanced(root->right) == false ){
      
            return false;
   
        }
   
   
        int lh = Height(root->left);
   
        int rh = Height(root->right);
   
   
        if ( abs( lh - rh ) <= 1 ){
       
            return true;
   
        }
      
            return false;
        
    }
};