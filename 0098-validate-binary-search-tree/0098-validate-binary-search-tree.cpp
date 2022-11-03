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
    bool check(TreeNode*root,long max,long min)
    {
        if(root==NULL) return true;
        return (root->val>min&&root->val<max&&check(root->left,root->val,min)&&check(root->right,max,root->val));
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MAX,LONG_MIN);
    }
};