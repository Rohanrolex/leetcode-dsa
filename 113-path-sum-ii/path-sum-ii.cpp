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

void  anspath(TreeNode* root, int target , vector<vector<int>>&ans , vector<int>&path){
      if(root == NULL )return;

      path.push_back(root->val);

      if(root->left == NULL && root->right == NULL) {
         if(root->val == target) ans.push_back(path);
      }
     anspath(root->left , target - root->val , ans , path);
    anspath(root->right , target - root->val , ans , path);
   path.pop_back();
}





    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

         vector<vector<int>>ans;


         vector<int>path;


          anspath(root , targetSum , ans , path);

          return ans;
        
    }
};