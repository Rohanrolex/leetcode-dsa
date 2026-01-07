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

    int maxpro(TreeNode* root, long long &maxi, int &totalsum) {
        if (root == NULL) return 0;

        int subtree = root->val;
        subtree += maxpro(root->left, maxi, totalsum);
        subtree += maxpro(root->right, maxi, totalsum);

        maxi = max(maxi, 1LL * subtree * (totalsum - subtree));
        return subtree;
    }

    void claculate(TreeNode* root, int &totalsum) {
        if (root == NULL) return;

        totalsum += root->val;
        claculate(root->left, totalsum);
        claculate(root->right, totalsum);
    }

    int maxProduct(TreeNode* root) {
        int totalsum = 0;
        claculate(root, totalsum);

        long long maxi = 0;
        maxpro(root, maxi, totalsum);

        const int mod = 1e9 + 7;
        return maxi % mod;
    }
};
