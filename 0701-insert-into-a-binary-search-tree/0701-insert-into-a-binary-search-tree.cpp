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
        
        if(tmp->val<val) 
        {
          if(tmp->right!=NULL)tmp=tmp->right;
          else {tmp->right=new TreeNode(val); break;}
        }
        else 
        {
           if(tmp->left!=NULL)tmp=tmp->left;
          else {tmp->left=new TreeNode(val); break;}
        }
      }
      return root;
        
    }
};