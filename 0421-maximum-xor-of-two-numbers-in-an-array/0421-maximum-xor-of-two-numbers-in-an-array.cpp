class node
{
  public:
  node* link[2];
  
};

class trie
{
  node*root;
  public:
  trie()
  {
    root=new node();
  }
  
  void insert(int num)
  {
    node*tmp=root;
    for(int i=31;i>=0;i--)
    {
      int b=(num>>i)&1;
      if(!tmp->link[b])
      {
        tmp->link[b]=new node();
      }
      tmp=tmp->link[b];
    }
  }
  
  int check(int num)
  {
    node*tmp=root;
    int maxx=0;
    for(int i=31;i>=0;i--)
    {
      int b=(num>>i)&1;
      if(tmp->link[1-b])
      {
        maxx=maxx|(1<<i);
          tmp=tmp->link[1-b];
      }
      else
      {
        tmp=tmp->link[b];
      }
    }
    return maxx;
  }
  
  
  
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
      trie t;
      for(auto x:nums)
      {
        t.insert(x);
      }
      int ans=0;
      for(auto x:nums)
      {
        ans=max(ans,t.check(x));
      }
      
        return ans;
    }
};