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
    vector<string> ans;
    void path(TreeNode*root, string s)
    {
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(s+to_string(root->val));
            return;
        }
        
        path(root->left,s+to_string(root->val)+"->");
        path(root->right,s+to_string(root->val)+"->");
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        path(root,s);
        return ans;
        
    }
};