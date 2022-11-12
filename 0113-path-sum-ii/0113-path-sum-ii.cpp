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
  vector<vector<int>>ans;
  void f(TreeNode* root, int t,vector<int>&a)
  {
    if(!root) return;
   if(root->left==NULL&&root->right==NULL)
   {
     if(t==root->val)
     {
       a.push_back(root->val);
       ans.push_back(a);
       a.pop_back();
     }
     return;
   }
    a.push_back(root->val);
    f(root->left,t-root->val,a);
    f(root->right,t-root->val,a);
    a.pop_back();
  }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
      vector<int>a;
      
      f(root,t,a);
        return ans;
    }
};