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
    bool findTarget(TreeNode* root, int k) {
      stack<TreeNode*>a;
      stack<TreeNode*>b;
      TreeNode*tmp1=root;
      TreeNode*tmp2=root;
      while(true)
      {
        while(tmp1) {a.push(tmp1); tmp1=tmp1->left;}
        while(tmp2) {b.push(tmp2); tmp2=tmp2->right;}
        
        TreeNode*x=a.top();
        TreeNode*y=b.top();
        
        int sum=x->val+y->val;
        if(x==y) return false;
        if(sum==k) return true;
        else if(sum>k)
        {
          b.pop();
          if(y->left)
          {
            tmp2=y->left;
            tmp1=NULL;
          }
        }
        else
        {
          a.pop();
          if(x->right)
          {
            tmp1=x->right;
            tmp2=NULL;
          }
        }
      }
        return false;
    }
};