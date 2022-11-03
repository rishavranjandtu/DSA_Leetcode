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
    int i=0;
    TreeNode*make(vector<int>& a, int l)
    {
        if(i==a.size()||a[i]>=l) return NULL;
        TreeNode*n=new TreeNode(a[i++]);
        n->left=make(a,n->val);
        n->right=make(a,l);
        return n;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return make(preorder,INT_MAX);
    }
};