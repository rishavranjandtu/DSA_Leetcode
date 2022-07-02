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
        ListNode*curr;
        ListNode*prev;
        ListNode*tmp;
        ListNode*s;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        prev=slow;
        curr=slow->next;
        prev->next=NULL;
        while(curr!=NULL)
        {
            tmp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmp;
        }
        slow=head;
        fast=prev;
        while(fast!=NULL)
        {
            if(slow->val!=fast->val) return false;
            else
            {
                slow=slow->next;
                fast=fast->next;
            }
        }
        return true;
        
        
    }
};