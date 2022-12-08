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
  void p(TreeNode* root1,vector<int>&v)
  {
    if(root1==NULL) return;
    
    p(root1->left,v);
    if(root1->left==NULL&&root1->right==NULL) v.push_back(root1->val);
    p(root1->right,v);
  }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
      vector<int>b;
      p(root1,a);
      p(root2,b);
      int n=a.size();
      int i=0;
      if(a.size()!=b.size()) return false;
      while(i<n)
      {
        if(a[i]!=b[i]) return false;
        i++;
      }
      return true;
    }
};