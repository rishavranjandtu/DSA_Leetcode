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
    int sum=0;
    void check(TreeNode* root, char c)
    {
        if(root==NULL) return;
        
        check(root->left,'l');
        if(root->left==NULL&&root->right==NULL&&c=='l') sum+=root->val;
        check(root->right,'r');
      
    }
    int sumOfLeftLeaves(TreeNode* root) {
        //dfs
        char c='x';
        check(root,c);
        return sum;
    }
};