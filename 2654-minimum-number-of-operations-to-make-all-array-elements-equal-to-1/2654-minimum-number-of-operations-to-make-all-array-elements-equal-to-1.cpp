class Solution {
public:
    int minOperations(vector<int>& nums) {
      int n=nums.size();
      int c=count(nums.begin(),nums.end(),1);
      if(c>=1) return n-c;
      int ans=INT_MAX;
      for(int i=0;i<n;i++)
      {
        int g=nums[i];
        for(int j=i+1;j<n;j++)
        {
          g=gcd(g,nums[j]);
          if(g==1) ans=min(ans,j-i+(n-1));
        }
      }
        return ans==INT_MAX?-1:ans;
    }
};