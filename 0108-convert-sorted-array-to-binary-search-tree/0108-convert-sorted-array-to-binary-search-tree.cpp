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
    TreeNode *fun(int l, int h,vector<int>&v)
    {
      if(l>h) return  NULL;
      int mid =(l+h)/2;
      TreeNode*node= new TreeNode(v[mid]);
      node->left=fun(l,mid-1,v);
      node->right=fun(mid+1,h,v);
      return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      int l=0;
      int h=nums.size()-1;
      int mid=(l+h)/2;
      TreeNode *node=new TreeNode(nums[mid]);
      node->left=fun(0,mid-1,nums);
      node->right=fun(mid+1,h,nums);
      return node;
        
    }
};