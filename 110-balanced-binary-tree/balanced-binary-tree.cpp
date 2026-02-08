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
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int height =1;
        btf(root, height);
        if(height) return true;
        else return false;

      
        
        
    }

    int btf(TreeNode* root , int &height){
        if(root==nullptr) return 0;
        int left =btf(root->left, height)+1;
        int right=btf(root->right ,height)+1;
        if(abs(right-left)>1) return height=0;
        else return max(left,right);

    }



};