class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      int minn=INT_MAX;
      int ans=0;
      for(int i=0;i<n;i++)
      {
        int x=i+1;
        int y=n-1;
        while(x<y)
        {
          int sum=nums[i]+nums[x]+nums[y];
          if(abs(target-sum)<minn)
          {
            minn=abs(target-sum);
            ans=sum;
          }
          if(sum>target) y--;
          else x++;
        }
      }
      return ans;
        
    }
};