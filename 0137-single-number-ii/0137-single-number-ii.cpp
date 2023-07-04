class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unsigned shift=1;
        int count=0;
        int ans=0;
        for(int i=0;i<=31;i++)
        {
          count=0;
          for(auto x:nums)
          {
            if(x&shift) count++;
          }
          if(count%3!=0) ans=ans+shift;
          shift=shift<<1;
        }
      return ans;
    }
};