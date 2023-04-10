class Solution {
public:
    void sortColors(vector<int>& nums) {
      /*
     vector<int>v(3,0);
      int n=nums.size();
     for(auto x:nums) v[x]++;
      int j=0;
      for(int i=0;i<n;i++)
      {
        if(i<v[0]) nums[i]=0;
        else if(i>=v[0]&&i<(v[0]+v[1]))nums[i]=1;
        else nums[i]=2;
      }
      */
      
      int l=0;
      int m=0;
      int h=nums.size()-1;
      while(m<=h)
      {
        if(nums[m]==0)
        {
          swap(nums[l++],nums[m++]);
        }
        else if(nums[m]==1) m++;
        else 
        {
          swap(nums[m],nums[h--]);
        }
      }
    }
};