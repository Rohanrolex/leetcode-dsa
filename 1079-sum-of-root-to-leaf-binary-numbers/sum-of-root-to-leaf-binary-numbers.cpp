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

int dfs(TreeNode * root , int currsum){

if(root == NULL) return 0;
 currsum =  currsum*2 + root->val;

if(root->left == NULL && root->right ==NULL) return currsum;

return dfs(root->left , currsum) + dfs(root->right , currsum);


}
    int sumRootToLeaf(TreeNode* root) {
        
  return dfs(root, 0);
 
    }
};