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
  bool check(TreeNode*root, TreeNode*s)
  {
    if(root==NULL||s==NULL) return root==s;
    
    return root->val==s->val&&check(root->left,s->left)&&check(root->right,s->right);
  }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      
      if(root==NULL) return false;
      if(subRoot==NULL) return true;
        if(check(root,subRoot)==true) return true;
     return  isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    
    }
};