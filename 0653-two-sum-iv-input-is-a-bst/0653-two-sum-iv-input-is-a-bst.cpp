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
    bool findTarget(TreeNode* root, int k) {
      stack<TreeNode*>a;
      stack<TreeNode*>b;
      
      TreeNode*tmp=root;
      TreeNode*tmp1=root;
     
      while(true)
      {
         while(tmp) {a.push(tmp); tmp=tmp->left;}
         while(tmp1){b.push(tmp1); tmp1=tmp1->right;}
      
          tmp=a.top();
          tmp1=b.top();
        int sum=tmp->val+tmp1->val;
        
        if(tmp==tmp1) return false;
        if(sum==k)
        {
          if(tmp==tmp1) return false;
          return true;
        }
        else if(sum<k)
        {
          a.pop();
          tmp=tmp->right;
          tmp1=NULL;
        }
        
        else if(sum>k)
        {
          b.pop();
          tmp1=tmp1->left;
          tmp=NULL;
        }
      }
        return false;
        
    }
};