class Solution {
public:
    void sortColors(vector<int>& nums) {
     vector<int>v(3,0);
      int n=nums.size();
     for(auto x:nums) v[x]++;
      int j=0;
      for(int i=0;i<3;i++)
      {
        while(v[i]>0)
        {
          nums[j++]=i;
          v[i]--;
        }
      }
    }
};