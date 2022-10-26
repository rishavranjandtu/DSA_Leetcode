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
        
        int l=fhl(root);
        int r=fhr(root);
        
        if(l==r) return (1<<l)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    
    int fhl(TreeNode* r)
    {
        int c=0;
        while(r!=NULL)
        {
            c++;
            r=r->left;
        }
        return c;
    }
    int fhr(TreeNode* r)
    {
        int c=0;
        while(r!=NULL)
        {
            c++;
            r=r->right;
        }
        return c;
    }
    
};