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
    int mod = 1000000007;
    
    long long ans = 0;
    
    int updateNodes(TreeNode *root){
        if(not root) return 0;
        
        int leftSum = updateNodes(root->left);
        int rightSum = updateNodes(root->right);
        
        root->val += leftSum+rightSum;
        
        return root->val;
    }
    
    void traverse(TreeNode *root, int totalSum){
        if(not root) return;
        
        ans = max(ans,( (long long)(totalSum-root->val) *  (long long)(root->val)));
        
        traverse(root->left, totalSum);
        traverse(root->right, totalSum);
    }
    
    int maxProduct(TreeNode* root) {
        int totalSum = updateNodes(root);
        traverse(root, totalSum);
        return ans%mod;
    }
};