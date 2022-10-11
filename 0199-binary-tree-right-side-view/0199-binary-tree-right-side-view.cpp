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
    vector<int> rightSideView(TreeNode* root) {
        //bfs
        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int nn=q.size();
            for(int i=0;i<nn;i++)
            {
                TreeNode*n= q.front();
                q.pop();
                if(n->left!=NULL) q.push(n->left);
                if(n->right!=NULL) q.push(n->right);
                if(i==nn-1) ans.push_back(n->val);
            }
        }
        return ans;
        
    }
};