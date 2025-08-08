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
    int maxdepth =0;


//maxdepth find in the tree
    void  findmaxdepth(TreeNode* root , int depth){
         if(root == NULL) return;
           maxdepth = max(maxdepth , depth);
       findmaxdepth(root->left , depth+1);
       findmaxdepth(root->right , depth+1);
           
    }


    //lowest  leave ancestor find 
   TreeNode* findAns(TreeNode* root , int depth){
           if(root == NULL) return NULL;
           if(maxdepth == depth) return root;

           TreeNode* left = findAns(root->left , depth +1);
           TreeNode* right = findAns(root->right , depth +1);

           if(left && right) return root; 
           return left ? left : right;

   }

    


    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
       
         findmaxdepth(root, 0);
         return findAns(root , 0);
         
    }
};