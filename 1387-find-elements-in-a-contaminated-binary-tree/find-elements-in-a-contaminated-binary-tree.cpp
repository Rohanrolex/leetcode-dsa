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
class FindElements {
public:
unordered_set<int>node;

void maketree(TreeNode* root , int nodeval){
     if(!root) return;

     root->val = nodeval; //change the value 
     node.insert(nodeval);
     maketree(root->left , 2* nodeval +1);
     maketree(root->right , 2* nodeval +2);
     
}
    FindElements(TreeNode* root) {
        maketree(root, 0);

    }
    
    bool find(int target) {
          return node.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */