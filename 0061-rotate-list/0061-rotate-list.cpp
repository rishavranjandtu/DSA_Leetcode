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
    ListNode* rotateRight(ListNode* head, int k) {
      if(head==NULL) return NULL;
      ListNode*tmp=head;
      int c=1;
      while(tmp->next!=NULL) {tmp=tmp->next; c++;}
      tmp->next=head;
      int t=(c-(k%c))%c;
      for(int i=0;i<t;i++)
      {
        tmp=tmp->next;
      }
      head=tmp->next;
      tmp->next=NULL;
      return head;
        
    }
};