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
    int ans=0;
    void check(TreeNode*root,int limit)
    {
        if(root==NULL) return;
        
        if(root->val>=limit)
        {
            ans++;
            limit=root->val;
        }
        check(root->left,limit);
        check(root->right,limit);
        
    }
    int goodNodes(TreeNode* root) {
        int limit=INT_MIN;
         check(root,limit);
        return ans;
    }
};