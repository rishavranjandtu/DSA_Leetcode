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
      int o=0;
      vector<vector<int>>ans;
      if(root==NULL) return ans;
      queue<TreeNode*>q;
      q.push(root);
      while(!q.empty())
      {
        int n=q.size();
        vector<int>v(n,0);
        int k=0;
        if(o!=0) k=n-1;
        for(int j=0;j<n;j++)
        {
          TreeNode*f=q.front();
          q.pop();
          v[k]=f->val;
          o==0?k++:k--;
          if(f->left) q.push(f->left);
          if(f->right) q.push(f->right);
        }
        o=!o;
        ans.push_back(v);
        
      }
        return ans;
    }
};