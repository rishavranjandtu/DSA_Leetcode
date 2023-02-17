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
  void pre(TreeNode*root,vector<int>&ans)
  {
    if(root==NULL) return;
    pre(root->left,ans);
    ans.push_back(root->val);
    pre(root->right,ans);
    
  }
    int minDiffInBST(TreeNode* root) {
       vector<int>ans;
      pre(root,ans);
      sort(ans.begin(),ans.end());
      int minn=INT_MAX;
      for(int i=0;i<ans.size()-1;i++)
      {
        minn=min(minn,abs(ans[i]-ans[i+1]));
      }
      return minn;
    }
};