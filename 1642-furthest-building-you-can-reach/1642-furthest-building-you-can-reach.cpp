class Solution {
public:
    int furthestBuilding(vector<int>& nums, int b, int l) {
      priority_queue<int,vector<int>,greater<int>>p;
      int n=nums.size();
      int sum=0;
      int i=0;
      for( i=0;i<n-1;i++)
      {
        if(nums[i]<nums[i+1])
        {
          int d=nums[i+1]-nums[i];
          p.push(d);
          if(p.size()>l)
          {
            int f=p.top();
            p.pop();
            b-=f;
            if(b<0) return i;
          }
        }
      }
      return i;
        
    }
};