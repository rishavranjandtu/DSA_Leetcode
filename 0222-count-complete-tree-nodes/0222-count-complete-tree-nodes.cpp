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
    int countNodes(TreeNode* root) {
    if(root==NULL) return 0;
      
      int l=ll(root);
      int r=rr(root);
      
      if(l==r) return (1<<l)-1;
      return 1+countNodes(root->left)+countNodes(root->right);
    }
  
     int ll(TreeNode* l)
     {
       int c=0;
       while(l)
       {
         c++;
         l=l->left;
       }
       return c;
     }
  
  int rr(TreeNode*r)
  {
    int c=0;
    while(r)
    {
      c++;
      r=r->right;
    }
    return c;
  }
  
};