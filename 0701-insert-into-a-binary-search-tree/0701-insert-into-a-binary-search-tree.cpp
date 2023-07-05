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
    TreeNode* insertIntoBST(TreeNode* tmp, int val) {
      
      if(tmp==NULL) return new TreeNode(val);
      TreeNode*root=tmp;
      while(root){
      if(val>root->val)
      {
        if(!root->right) {root->right=new TreeNode(val); break;}
        else root=root->right;
      }
      else
      {
        if(!root->left) {root->left=new TreeNode(val); break;}
        else root=root->left;
      }
      }
        return  tmp;
    }
};