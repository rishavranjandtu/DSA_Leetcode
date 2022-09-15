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
    int sum=0;
    void cal(TreeNode* root,char c)
    {
        if(root==NULL) return;
        
        cal(root->left,'l');
        if(root->left==NULL&&root->right==NULL&&c=='l') sum+=root->val;
        cal(root->right,'r');
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
       //bfs
        /*queue<pair<TreeNode*,char>>q;
        q.push({root,'x'});
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto p=q.front();
               TreeNode*n=p.first;
                q.pop();
                char e=p.second;
                if(n->left!=NULL) q.push({n->left,'l'});
                
                if(n->right!=NULL) q.push({n->right,'r'});
                if(n->left==NULL&&n->right==NULL&&e=='l') sum+=n->val;
            }
        }
        return sum;
        */
        
        //dfs
        char c='x';
        cal(root,c);
        return sum;
    }
};