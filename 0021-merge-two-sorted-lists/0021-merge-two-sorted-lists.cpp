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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode*h=new ListNode(0);
      ListNode*ans=h;
      ListNode*a=list1;
      ListNode*b=list2;
      while(a!=NULL&&b!=NULL)
      {
        if(a->val<b->val)
        {
          h->next=new ListNode(a->val);
          h=h->next;
          a=a->next;
        }
        else
        {
          h->next=new ListNode(b->val);
          h=h->next;
          b=b->next;
        }
      }
      if(a!=NULL) h->next=a;
      else if(b!=NULL) h->next=b;
      return ans->next;
        
    }
};