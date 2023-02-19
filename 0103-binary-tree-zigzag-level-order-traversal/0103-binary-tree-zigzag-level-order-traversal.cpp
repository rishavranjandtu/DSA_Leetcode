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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      queue<TreeNode*>q;
      q.push(root);
      bool o=0;
      vector<vector<int>>ans;
      if(root==NULL) return ans;
      while(!q.empty())
      {
        int n=q.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++)
        {
          TreeNode*f=q.front();
          q.pop();
          if(f->left) q.push(f->left);
          if(f->right) q.push(f->right);
          if(o) v[n-1-i]=f->val;
          else v[i]=f->val;
        }
        o=o==0?1:0;
        ans.push_back(v);
      }
      return ans;
    }
};