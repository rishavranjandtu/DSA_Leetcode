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
      
      if(root==p||root==q||root==NULL) return root;
      TreeNode*a=lowestCommonAncestor(root->left,p,q);
      TreeNode*b=lowestCommonAncestor(root->right,p,q);
      if(a!=NULL&&b!=NULL) return root;
      else if(a!=NULL) return a;
      else if(b!=NULL) return b;
      return NULL;
        
    }
};