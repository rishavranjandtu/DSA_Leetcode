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
    int widthOfBinaryTree(TreeNode* root) {
      long ans=0;
      queue<pair<TreeNode*,long>>q;
      q.push({root,0});
      while(!q.empty())
      {
        int n=q.size();
        int m=q.front().second;
        long fi=0;
          long la=0;
        for(int i=0;i<n;i++)
        {
          TreeNode*f=q.front().first;
          long mm=q.front().second-m;
          q.pop();
          if(i==0) fi=mm;
          if(i==n-1) la=mm;
          if(f->left) q.push({f->left,2*mm+1});
          if(f->right) q.push({f->right,2*mm+2});
        }
        ans=max(ans,la-fi+1);
      }
      return (int)ans;
        
    }
};