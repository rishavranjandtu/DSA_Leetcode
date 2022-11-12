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
public: long long  c=0;
  void f(TreeNode* root, long long t)
  {
    
    if(!root) return;
    if(t==root->val) {c++;}
    
    t=t-root->val;
    f(root->left,t);
    f(root->right,t);
  }
    long long pathSum(TreeNode* root, long long t) {
      if(root!=NULL)
      {
        f(root,t);
        pathSum(root->left,t);
        pathSum(root->right,t);
      }
       return c;
    }
};