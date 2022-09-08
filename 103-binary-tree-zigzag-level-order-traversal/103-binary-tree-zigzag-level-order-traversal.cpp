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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        int f=1; //f=1 for l->r
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> v(n);
            for(int i=0;i<n;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                int j=f==1?i:n-1-i;
                    if(node->left!=NULL) q.push(node->left);
                    if(node->right!=NULL) q.push(node->right);
                
                v[j]=node->val;
            }
            f=f==0?1:0;
            ans.push_back(v);
        }
        return ans;
        
    }
};