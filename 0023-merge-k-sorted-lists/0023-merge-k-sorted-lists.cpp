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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      
      priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>p;
     
      for(auto x:lists)
      {
        if(x!=NULL)p.push({x->val,x});
      }
      
      ListNode*h=new ListNode(0);
      ListNode*ans=h;
      while(!p.empty())
      {
        auto x=p.top();
        int c=x.first;
        ListNode*n=x.second;
        p.pop();
        if(n->next!=NULL)
        {
          p.push({n->next->val,n->next});
        }
        h->next=n;
        h=h->next;
      }
      return ans->next;
    }
};