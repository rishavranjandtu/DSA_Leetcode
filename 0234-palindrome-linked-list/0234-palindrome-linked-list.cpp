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
    bool isPalindrome(ListNode* head) {
     ListNode*slow=head;
     ListNode*fast=head;
      while(fast!=NULL&&fast->next!=NULL)
      {
        slow=slow->next;
        fast=fast->next->next;
      }
     ListNode*prev=slow;
      slow=slow->next;
      prev->next=NULL;
      ListNode*curr=slow;
      ListNode*tmp;
      while(curr!=NULL)
      {
        tmp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tmp;
      }
      slow=prev;
      fast=head;
      while(slow!=NULL)
      {
        if(slow->val!=fast->val) return false;
        slow=slow->next;
        fast=fast->next;
      }
      return true;
      
    }
};