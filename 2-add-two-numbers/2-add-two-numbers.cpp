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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        /*
        ListNode*a=new ListNode();
        ListNode*b=a;
        int carry=0;
        while(l1!=NULL||l2!=NULL)
        {
            ListNode*n=new ListNode();
            if(l1==NULL)
            {
                n->val=l2->val+carry;
                if(n->val>=10)
                {
                    n->val=n->val-10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                n->val=l1->val+carry;
                if(n->val>=10)
                {
                    n->val=n->val-10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }
                l1=l1->next;
            }
            else
            {
                n->val=l1->val+l2->val+carry;
                if(n->val>=10)
                {
                    n->val=n->val-10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }
                l1=l1->next;
                l2=l2->next;
            }
            a->next=n;
            a=n;
            if(l1==NULL&&l2==NULL&&carry==1)
            {
                ListNode*tmp=new ListNode();
                tmp->val=carry;
                a->next=tmp;
                a=tmp;
            }
        }
        return b->next;
        */
        
        //////////////better approach///////
        
        ListNode*dummy=new ListNode(0);
        ListNode*tmp=dummy;
        int carry=0;
        while(l1!=NULL||l2!=NULL||carry==1)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            ListNode*n=new ListNode(sum);
            tmp->next=n;
            tmp=tmp->next;
        }
        return dummy->next;
    }
};