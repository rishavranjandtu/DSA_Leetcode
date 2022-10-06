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
    void path(string s,TreeNode* root)
    {
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(s+to_string(root->val));
            return;
        }
        
        path(s+to_string(root->val)+"->",root->left);
        path(s+to_string(root->val)+"->",root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
    string s="";
    path(s,root);
        return ans;
        
    }
};