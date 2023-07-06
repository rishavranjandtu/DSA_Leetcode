class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int n=nums.size();
      vector<int>pre(n,0);
      pre[0]=nums[0];
      for(int K=1;K<n;K++) pre[K]+=pre[K-1]+nums[K];
      
      int i=0;
      int j=0;
      int ans=INT_MAX;
      while(j<n)
      {
        if(pre[j]>=target) ans=min(ans,j-i+1);
        while(pre[j]-pre[i]>=target)
        {
          ans=min(ans,j-i);
          i++;
        }
        j++;
      }
      return ans==INT_MAX?0:ans;
        
    }
};