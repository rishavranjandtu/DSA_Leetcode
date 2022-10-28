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
        queue<TreeNode*>q;
        q.push(root);
        int f=0;
        while(!q.empty())
        {
            int g=q.size();
            vector<int>s(g);
            for(int i=0;i<g;i++)
            {
                TreeNode*n=q.front();
                q.pop();
                if(n->left){q.push(n->left);}
                if(n->right){q.push(n->right);}
                int j=f==0?i:g-1-i;
               s[j]=n->val;
            }
            f=f==0?1:0;
            ans.push_back(s);
        }
        return ans;
    }
};