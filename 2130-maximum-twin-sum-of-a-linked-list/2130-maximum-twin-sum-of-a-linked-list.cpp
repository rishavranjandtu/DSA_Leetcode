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
    int pairSum(ListNode* head) {
      ListNode*odd=head;
      ListNode*even=head;
      while(even->next->next!=NULL)
      {
        odd=odd->next;
        even=even->next->next;
      }
      ListNode*a=odd->next;
      ListNode*curr=head;
      ListNode*prev=NULL;
      ListNode*tmp;
      while(curr!=a)
      {
        tmp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tmp;
      }
      int sum=0;
      tmp=prev;
      while(a!=NULL)
      {
        sum=max(sum,a->val+tmp->val);
        a=a->next;
        tmp=tmp->next;
      }
        return sum;
    }
};