/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == NULL) return NULL;
        
        int currval = root->val;

//if both p and q are on right 
        if(currval < p->val && currval < q->val){
            return lowestCommonAncestor(root->right , p ,q);

        }
//if both p and q are on left 
        if(currval > p->val && currval > q->val){
             return lowestCommonAncestor(root->left , p ,q);
        }
        return root; //if p and q one is on left and another is on   right
    }
};