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
    TreeNode *fun(vector<int>&preorder, int l, int h)
    {
      if(l>h) return NULL;
      int z=-1;
      TreeNode*node=new TreeNode(preorder[l]);
      for(int i=l;i<=h;i++)
      {
        if(preorder[i]>preorder[l])
        {
          z=i;
          break;
        }
      }
      node->left=z==-1?fun(preorder,l+1,h):fun(preorder,l+1,z-1);
      node->right=z==-1?NULL:fun(preorder,z,h);
      return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        return fun(preorder,0,n-1);
    }
};