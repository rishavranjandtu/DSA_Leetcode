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
    vector<vector<int>>ans;
    map<int,map<int,multiset<int>>>m;
    queue<pair<TreeNode*,pair<int,int>>>q;
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            TreeNode*n=p.first;
            int x=p.second.first;
            int y=p.second.second;
            if(n->left!=NULL) q.push({n->left,{x-1,y+1}});
            if(n->right!=NULL) q.push({n->right,{x+1,y+1}});
            m[x][y].insert(n->val);
        }
        
        for(auto x:m)
        {
            vector<int> v;
            for(auto y:x.second)
            {
                v.insert(v.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};