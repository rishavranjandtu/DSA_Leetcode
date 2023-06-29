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
    stack<TreeNode*>s;
    BSTIterator(TreeNode* root) {
      push_fun(root);
        
    }
    
    int next() {
      TreeNode*a=s.top();
      s.pop();
      TreeNode*tmp=a;
      
      if(tmp->right) 
      {
        tmp=tmp->right;
        while(tmp)
        {
          s.push(tmp);
          tmp=tmp->left;
        }
      }
      return a->val;
        
    }
    
    bool hasNext() {
        return !s.empty();
    }
  
    void push_fun(TreeNode *root)
    {
      TreeNode*tmp=root;
      while(tmp)
      {
        s.push(tmp);
        tmp=tmp->left;
      }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */