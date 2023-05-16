class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
      int i=0;
      int j=nums.size()-1;
      int ans=0;
      vector<int>p{1};
      int mod=1e9+7;
      for(int i=0;i<j;i++)
      {
        p.push_back((p.back()*2)%mod);
      }
      sort(nums.begin(),nums.end());
      while(i<=j)
      {
        if(nums[i]+nums[j]<=target)
        {
          ans=(ans+p[j-i])%mod;
          i++;
        }
        else
        {
          j--;
        }
      }
      return ans;
        
    }
};