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
    void insert(TreeNode*root, int v)
    {
        
        
        if(root->val>v&&root->left==NULL)
        {
            TreeNode*n=new TreeNode(v);
            root->left=n;
            return;
        }
        else if(root->val>v)
        {
            insert(root->left,v);
        }
        
        if(root->val<v&&root->right==NULL)
        {
            TreeNode*n=new TreeNode(v);
            root->right=n;
            return;
        }
        else if(root->val<v)
        {
            insert(root->right,v);
        }
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode*n= new TreeNode(val);
            return n;
        }
        insert(root,val);
        return root;
    }
};