/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      Node*tmp=head;
      map<Node*,Node*>m;
      Node*z=new Node(0);
      Node*ans=z;
      while(tmp)
      {
        Node*n=new Node(tmp->val);
        m[tmp]=n;
        z->next=n;
        z=z->next;
        tmp=tmp->next;
      }
      tmp=head;
      while(tmp)
      {
        m[tmp]->random=m[tmp->random];
        tmp=tmp->next;
      }
      return ans->next;
        
    }
};