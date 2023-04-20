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
        q.push({root,0});
        int ans=INT_MIN;
        while(!q.empty())
        {
            int n=q.size();
            int minn=q.front().second;
            int first,last;
            for(int i=0;i<n;i++)
            {
                long curr=q.front().second-minn;
                TreeNode*p=q.front().first;
                q.pop();
                if(i==0) first=curr;
                if(i==n-1) last=curr;
                if(p->left!=NULL) q.push({p->left,curr*2+1});
                if(p->right!=NULL) q.push({p->right,curr*2+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};