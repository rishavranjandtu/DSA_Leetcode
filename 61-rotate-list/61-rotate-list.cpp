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
        
         if(head==NULL||head->next==NULL||k==0) return head;
        ListNode*tmp=head;
        int len=1;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
            len++;
        }
        tmp->next=head;
        ListNode*slow=head;
        int l=k%len;
        int end=len-l;
        while(end!=0)
        {
            tmp=tmp->next;
            end--;
        }
        ListNode*a=tmp->next;
        tmp->next=NULL;
        head=a;
        return head;
    }
};