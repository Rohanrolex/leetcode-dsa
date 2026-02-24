/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int dfs(TreeNode* root , string path){
   
    if(root == NULL) return 0;

    path += char('0'+root->val); //add the current node value 
    if(root->left == NULL && root->right == NULL){
        return stoi(path , 0 , 2); //it converts the string to decimal value 
    }
    return dfs(root->left , path)+dfs(root->right , path);
}
    int sumRootToLeaf(TreeNode* root) {
       
       if(root == NULL) return 0;
      return dfs(root, "");
        
    }
};