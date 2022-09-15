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
    TreeNode*make(vector<int>& nums,int l,int h)
    {
        if(l>h) return NULL;
        
        int mid=(l+h)/2;
        TreeNode*n=new TreeNode(nums[mid]);
        n->left=make(nums,l,mid-1);
        n->right=make(nums,mid+1,h);
        return n;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        return make(nums,l,h);
    }
};