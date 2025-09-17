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
    int minDepth(TreeNode* root) {
         if(root == NULL) return 0; //there is no ele in the tree

         if(root->left == NULL) return  1+minDepth(root->right); //only go for right
         if(root->right == NULL) return 1+minDepth(root->left); //only go for left

         return 1+min(minDepth(root->right) , minDepth(root->left)); //choose the smallest one that is the ans
        
    }
};