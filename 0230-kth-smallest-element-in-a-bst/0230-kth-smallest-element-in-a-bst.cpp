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
    void dfs(TreeNode *root,int k, priority_queue<int>&p)
    {
      if(root==NULL) return;
      
      p.push(root->val);
      if(p.size()>k) p.pop();
      dfs(root->left,k,p);
      dfs(root->right,k,p);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>a;
        dfs(root,k,a);
      return a.top();
    }
};