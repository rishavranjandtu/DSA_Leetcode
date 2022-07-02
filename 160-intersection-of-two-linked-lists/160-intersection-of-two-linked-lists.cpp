/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ////////////O(m^n)//////////
        /*
        ListNode*a=headA;
        while(a!=NULL)
        {
            ListNode*b=headB;
            while(b!=NULL)
            {
                if(a==b) return a;
                b=b->next;
            }
            a=a->next;
        }
        return NULL;
        */
        ///////////////////////////
        /////////O(m+n)////////////
        
        ListNode*a=headA;
        ListNode*b=headB;
        
        while(a!=b)
        {
            if(a==NULL) a=headB;
            else a=a->next;
            
            if(b==NULL) b=headA;
            else b=b->next;
        }
        return a;
        
    }
};