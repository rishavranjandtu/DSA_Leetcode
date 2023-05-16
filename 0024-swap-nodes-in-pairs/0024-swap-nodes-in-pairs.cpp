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
    ListNode* swapPairs(ListNode* head) {
      ListNode*prev=new ListNode(0);
      ListNode*ans=prev;
      ListNode*curr=head;
      ListNode*tmp;
      if(head==NULL||head->next==NULL) return head;
      while(curr!=NULL&&curr->next!=NULL)
      {
        tmp=curr->next;
        curr->next=tmp->next;
        tmp->next=curr;
        prev->next=tmp;
        prev=curr;
        curr=curr->next;
      }
      return ans->next;
        
    }
};