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
    int maxLevelSum(TreeNode* root) {
      queue<TreeNode*>q;
      q.push(root);
        
      int summ=INT_MIN;
      int ans=-1;
      int l=0;
      while(!q.empty())
      {
        int sum=0;
        int n=q.size();
        for(int i=0;i<n;i++)
        {
          TreeNode*r=q.front();
          q.pop();
          sum+=r->val;
          if(r->left) q.push(r->left);
          if(r->right) q.push(r->right);
        }
        l++;
        if(sum>summ)
        {
          summ=sum;
          ans=l;
        }
      }
      return ans;
    }
  
};