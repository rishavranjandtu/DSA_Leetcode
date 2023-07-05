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
    TreeNode* fun(TreeNode* root)
    {
          TreeNode*tmp=root->right;
          if(tmp==NULL) return root->left;
          while(tmp->left) tmp=tmp->left;
          tmp->left=root->left;
          return root->right;
    }
    TreeNode* deleteNode(TreeNode* r, int key) {
      
      TreeNode*root=r;
      while(root)
      {
        if(root->val==key) return fun(root);
        
        else if(root->val<key)
        {
          if(root->right&&root->right->val==key) {root->right=fun(root->right); return r;}
          else root=root->right;
        }
        else
        {
          if(root->left&&root->left->val==key) {root->left=fun(root->left); return r;}
          else root=root->left;
        }
      }
      return r;
    }
};