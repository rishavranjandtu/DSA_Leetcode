class Solution {
public:
    int fun(vector<int>&nums,int m)
    {
      int ans=0;
      for(auto x:nums)
      {
        ans+=(x+m-1)/m;
      }
      return ans;
    }
    int smallestDivisor(vector<int>& nums, int t) {
      int n=nums.size();
      int l=1;
      int h=*max_element(nums.begin(),nums.end());
      int c=0;
      while(l<=h)
      {
        int m=(l+h)/2;
        c=fun(nums,m);
        if(c<=t) h=m-1;
        else l=m+1;
      }
      return l;
        
    }
};