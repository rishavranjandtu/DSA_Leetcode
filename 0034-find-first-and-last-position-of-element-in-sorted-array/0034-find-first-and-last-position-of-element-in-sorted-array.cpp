class Solution {
public:
    int first_fun(vector<int>&nums,int t)
    {
      int l=0;
      int h=nums.size()-1;
      int ans=-1;
      while(l<=h)
      {
        int m=(l+h)/2;
        if(nums[m]==t)
        {
          ans=m;
          h=m-1;
        }
        else if(nums[m]<t)
        {
          l=m+1;
        }
        else if(nums[m]>t)
        {
          h=m-1;
        }
      }
      return ans;
    }
  
    int last_fun(vector<int>&nums,int t)
    {
      int l=0;
      int ans=-1;
      int h=nums.size()-1;
      while(l<=h)
      {
        int m=(l+h)/2;
        if(nums[m]==t)
        {
          ans=m;
          l=m+1;
        }
        else if(nums[m]>t) h=m-1;
        else
        {
          l=m+1;
        }
      }
      return ans;
    }
  
    vector<int> searchRange(vector<int>& nums, int t) {
      int n=nums.size();
      int f=first_fun(nums,t);
      int l=last_fun(nums,t);
      return {f,l};
        
    }
};