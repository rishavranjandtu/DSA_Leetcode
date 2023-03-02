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
  int ans=0;
  void fun(TreeNode*root, int maxx)
  {
    if(root==NULL) return;
    
    if(root->val>=maxx) ans++;
    fun(root->left,max(root->val,maxx));
    fun(root->right, max(root->val,maxx));
  }
    int goodNodes(TreeNode* root) {
         fun(root,root->val);
      return ans;
    }
};