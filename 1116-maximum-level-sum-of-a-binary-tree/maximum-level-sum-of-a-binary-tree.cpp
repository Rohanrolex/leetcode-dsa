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
vector<int>sum ={INT_MIN};

void dfs(TreeNode* root , int lavel = 1){
    if(root == NULL) return;
    if(sum.size() == lavel) sum.push_back(root->val);
    else sum[lavel]+= root->val;
    dfs(root->left , lavel+1);
    dfs(root->right , lavel+1);
}
    int maxLevelSum(TreeNode* root) {
        
        dfs(root);
        return max_element(sum.begin(), sum.end())-sum.begin();
        
    }
};