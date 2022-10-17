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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long>>q;
        int ans=INT_MIN;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            int minn=q.front().second;
            int f,l;
            for(int i=0;i<n;i++)
            {
                long curr=q.front().second-minn;
                TreeNode*p=q.front().first;
                q.pop();
                if(i==0) f=curr;
                if(i==n-1) l=curr;
                if(p->left!=NULL) q.push({p->left,curr*2+1});
                if(p->right!=NULL) q.push({p->right,curr*2+2});
            }
            ans=max(ans,l-f+1);
        }
        return ans;
    }
};