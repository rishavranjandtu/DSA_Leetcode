/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
      ListNode*a=head;
      ListNode*b=head;
      ListNode*x=head;
      ListNode*y=head;
      for(int i=0;i<k-1;i++)
      {
        b=b->next;
      }
      x=b;
      while(b->next!=NULL)
      {
        b=b->next;
        a=a->next;
      }
      swap(x->val,a->val);
      return head;
        
    }
};