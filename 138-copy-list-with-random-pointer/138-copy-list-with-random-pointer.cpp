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
    unordered_map<Node*,Node*>m;
    Node* copyRandomList(Node* head) {
        Node*tmp=head;
        while(tmp!=NULL)
        {
            Node*n=new Node(tmp->val);
            m[tmp]=n;
            tmp=tmp->next;
        }
        
        tmp=head;
        while(tmp!=NULL)
        {
            m[tmp]->next=m[tmp->next];
            m[tmp]->random=m[tmp->random];
            tmp=tmp->next;
        }
        return m[head];
        
    }
};