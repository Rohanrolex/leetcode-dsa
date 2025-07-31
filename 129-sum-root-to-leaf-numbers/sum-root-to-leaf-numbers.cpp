
class Solution {
public:

int dfs(TreeNode* root , int num){
     if(root == NULL) return 0; //if no root is there 
     
       num = num* 10 + root->val;
        
        if(root->left == NULL && root->right == NULL){
            return num;
        } 

      int leftsum =   dfs(root->left , num);  //for lefttree
      int rightsum =  dfs(root->right, num); //for righttree

return  leftsum + rightsum;  //  total sum of the tree
   
}

    int sumNumbers(TreeNode* root) {
       
         return dfs(root , 0);    
    }
};