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
    TreeNode* check(vector<int>v, int  low , int high){
     if(low > high) return NULL;
     int mid  = (low+high)/2;
     TreeNode* root = new TreeNode(v[mid]); 
     root->left = check(v , low , mid-1);
     root->right =check(v , mid+1 , high);
     return root;

    }

void triversal(TreeNode* root , vector<int> &v){
    if(!root) return;
    triversal(root->left,v);
    v.push_back(root->val);
    triversal(root->right,v);

}
    TreeNode* balanceBST(TreeNode* root) {
         vector<int>v;
        triversal(root , v);
        return check(v ,0 ,v.size()-1);
         
 
    }


};