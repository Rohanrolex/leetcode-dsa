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
vector<int>ans;
void findans(TreeNode* root , int label , vector<int>&ans){
    if(root == NULL) return;

    if(label == ans.size()){
      ans.push_back(root->val);
    } 
    findans(root->right , label+1 , ans); //first it going to the right
    findans(root->left , label+1 , ans); //then left

}
    vector<int> rightSideView(TreeNode* root) {
    if(root == NULL) return ans; 
    findans(root , 0 ,ans);
     return ans;   
    }
};