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
    ListNode* swapNodes(ListNode* head, int k) {
      vector<int>v;
      ListNode*tmp=head;
      while(tmp!=NULL)
      {
        v.push_back(tmp->val);
        tmp=tmp->next;
      }
      int n=v.size();
      swap(v[k-1],v[n-k]);
      
      ListNode*ne=new ListNode(0);
      ListNode*ans=ne;
      for(int i=0;i<n;i++)
      {
        ne->next=new ListNode(v[i]);
        ne=ne->next;
      }
      return ans->next;
        
    }
};