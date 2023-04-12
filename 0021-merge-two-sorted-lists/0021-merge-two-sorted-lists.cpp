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
  ListNode*fun(ListNode* l1, ListNode* l2)
  {
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    
    ListNode*h=new ListNode();
    if(l1->val<l2->val)
    {
      h->val=l1->val;
      h->next=fun(l1->next,l2);
    }
    else {h->val=l2->val; h->next=fun(l1,l2->next);}
    return h;
  }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode*h=new ListNode(0);
      h->next=fun(list1,list2);
      return h->next;
        
    }
};