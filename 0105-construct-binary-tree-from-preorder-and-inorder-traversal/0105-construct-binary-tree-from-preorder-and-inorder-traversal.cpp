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
    TreeNode* build(vector<int>&preorder,int ps,int pe,vector<int>&inorder,int is, int ie,map<int,int>&m)
    {
      
      if(ps>pe||is>ie) return NULL;
      int ind=m[preorder[ps]];
      int left=ind-is;
      
      TreeNode*node=new TreeNode(preorder[ps]);
      node->left=build(preorder,ps+1,ps+left,inorder,is,ind-1,m);
      node->right=build(preorder,ps+left+1,pe,inorder,ind+1,ie,m);
      return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
      map<int,int>m;
      for(int i=0;i<n;i++)
      {
        m[inorder[i]]=i;
      }
      return build(preorder,0,n-1,inorder,0,n-1,m);
    }
};