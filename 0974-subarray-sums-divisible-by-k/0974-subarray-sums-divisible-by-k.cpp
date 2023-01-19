class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)    {
      unordered_map<int,int>m;
      m[0]++;
      int t_sum=0;
      int count=0;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        t_sum+=nums[i];
        int rem=t_sum%k;
        if(rem<0) rem+=k;
        if(m.count(rem)>0) count+=m[rem];
        m[rem]++;
      }
      return count;
        
    }
};