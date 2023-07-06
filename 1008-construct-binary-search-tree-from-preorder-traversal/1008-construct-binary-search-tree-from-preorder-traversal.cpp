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
    int i=0;
    TreeNode*build(vector<int>&preorder,int l)
    {
      if(i==preorder.size()||preorder[i]>=l) return NULL;
      TreeNode*node=new TreeNode(preorder[i]);
      i++;
      node->left=build(preorder,node->val);
      node->right=build(preorder,l);
      return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      return build(preorder,INT_MAX);
      
        
    }
};