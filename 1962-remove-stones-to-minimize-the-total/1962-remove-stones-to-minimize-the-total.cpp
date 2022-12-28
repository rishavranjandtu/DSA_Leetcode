class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int,vector<int>>p;
      for(int i=0;i<piles.size();i++)
      {
        p.push(piles[i]);
      }
      while(k>0)
      {
        int f=p.top();
        p.pop();
        f=f-floor(f/2);
       
        p.push(f);
        k--;
      }
      int sum=0;
    while(!p.empty())
    {
     
      sum+=p.top();
      p.pop();
    }
      return sum;
    }
};