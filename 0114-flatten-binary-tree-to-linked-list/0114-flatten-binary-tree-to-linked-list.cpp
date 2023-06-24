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
    void dfs(TreeNode *root)
    {
      if(root==NULL) return;
      TreeNode*curr=NULL;
      if(root->left!=NULL)
        
      {
        curr=root->left;
        while(curr->right!=NULL) curr=curr->right;
        curr->right=root->right;
        root->right=root->left;
        root->left=NULL;
      }
      dfs(root->right);
    }
    void flatten(TreeNode* root) {
        dfs(root);
    }
};