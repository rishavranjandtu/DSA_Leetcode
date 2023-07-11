/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      queue<pair<TreeNode*,TreeNode*>>q;
      map<TreeNode*,vector<TreeNode*>>m;
      q.push({root,NULL});
      while(!q.empty())
      {
        TreeNode*f=q.front().first;
        TreeNode* p=q.front().second;
        q.pop();
        if(f->left)
        {
          m[f].push_back(f->left);
          q.push({f->left,f});
        }
        if(f->right)
        {
           m[f].push_back(f->right);
          q.push({f->right,f});
        }
        if(p!=NULL) m[f].push_back(p);
      }
      queue<pair<TreeNode*,TreeNode*>>a;
      a.push({target,NULL});
      int l=0;
      while(!a.empty())
      {
        int n=a.size();
        if(l==k) break;
        for(int i=0;i<n;i++)
        {
          TreeNode*f=a.front().first;
          TreeNode*p=a.front().second;
          a.pop();
          for(auto x:m[f]) if(x!=p)a.push({x,f});
        }
        l++;
      }
      
      vector<int>ans;
      while(!a.empty())
      {
        ans.push_back(a.front().first->val);
        a.pop();
      }
        return ans;
    }
};