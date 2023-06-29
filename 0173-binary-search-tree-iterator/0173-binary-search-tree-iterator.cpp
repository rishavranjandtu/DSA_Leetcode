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
class BSTIterator {
public:
    queue<TreeNode*>q;
    BSTIterator(TreeNode* root) {
      TreeNode*curr=root;
      
      while(curr!=NULL)
      {
        
       if(curr->left)
       {
         TreeNode*tmp=curr->left;
         while(tmp->right!=NULL&&tmp->right!=curr) tmp=tmp->right;
         
         if(tmp->right==NULL)
         {
           tmp->right=curr;
           curr=curr->left;
         }
         else
         {
           tmp->right=NULL;
           q.push(curr);
           curr=curr->right;
         }
       }
        else
        {
          q.push(curr);
          curr=curr->right;
        }
         
      }
      
    }
    
    int next() {
      if(hasNext()){
      TreeNode*a=q.front();
      q.pop();
      return a->val;}
      return -1;
    }
    
    bool hasNext() {
        return !q.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */