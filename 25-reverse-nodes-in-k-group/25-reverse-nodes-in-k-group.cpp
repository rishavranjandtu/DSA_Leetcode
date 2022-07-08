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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*tmp=head;
        int len=0;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            len++;
        }
        
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*prev=dummy;
        ListNode*curr;
        ListNode*nxt;
        
        while(len>=k)
        {
            curr=prev->next;
            nxt=curr->next;
            int t=k;
            while(t>1)
            {
                curr->next=nxt->next;
                nxt->next=prev->next;
                prev->next=nxt;
                nxt=curr->next;
                t--;
            }
            prev=curr;
            len-=k;
        }
        return dummy->next;
        
    }
};