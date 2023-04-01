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
  TreeNode*first=NULL;
  TreeNode*last=NULL;
  TreeNode*prev=NULL;
  
   void fun(TreeNode*root)
   {
     
     if(root==NULL) return;
     fun(root->left);
     
     if(prev!=NULL &&  (root->val < prev->val)) {
        if(first==NULL) {// this means that this the first voilation of rule;
            first = prev;
            last = root;
        }
        else 
            last = root;
     }
       prev=root;
     fun(root->right);
   }
    void recoverTree(TreeNode* root) {
      
      fun(root);
     if(first && last) swap(first->val, last->val);
        
    }
};