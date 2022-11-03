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
    
    bool check(TreeNode*root,long minn,long maxx)
    {
        
        if(root==NULL)
        {
            return true;
        }
        
        //RC
        if(root->val>minn&&root->val<maxx&&check(root->left,minn,root->val)&&check(root->right,root->val,maxx))
        {
            return true;
        }
        return false;
        
    }
    
    bool isValidBST(TreeNode* root) {
       return check(root,LONG_MIN,LONG_MAX); 
    }
};