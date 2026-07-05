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
    int f(TreeNode* root,int &maxi){
        if(root==nullptr) return 0;
        int ld = f(root->left,maxi);
        int rd = f(root->right,maxi);

        maxi = max(maxi,ld+rd);
        return 1+max(ld,rd);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int res=f(root,maxi);
        return maxi;
    }
};
