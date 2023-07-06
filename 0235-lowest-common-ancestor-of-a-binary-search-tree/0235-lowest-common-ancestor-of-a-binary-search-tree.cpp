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
    TreeNode* lowestCommonAncestor(TreeNode* tmp, TreeNode* p, TreeNode* q) {
        
      if(p->val>q->val) return lowestCommonAncestor(tmp,q,p);
      TreeNode*root=tmp;
      while(root)
      {
        if(p->val<=root->val&&root->val<=q->val) return root;
        else if(p->val<root->val&&q->val<root->val) root=root->left;
        else root=root->right;
      }
      return NULL;
    }
};