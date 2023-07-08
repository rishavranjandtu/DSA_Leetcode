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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
      if(root==NULL) return new TreeNode(val);
      TreeNode*tmp=root;
      while(tmp)
      {
        if(tmp->val>val)
        {
          if(tmp->left==NULL){tmp->left=new TreeNode(val); break;}
          else tmp=tmp->left;
        }
        else
        {
          if(tmp->right==NULL) {tmp->right=new TreeNode(val); break;}
          else tmp=tmp->right;
        }
      }
      return root;
        
    }
};