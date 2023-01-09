class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      set<pair<int,int>>ans;
      unordered_map<int,int>m;
      for(int i=0;i<nums.size();i++)
      {
        if(m.find(nums[i]-k)!=m.end())
        {
          ans.insert({nums[i]-k,nums[i]});
        }
          m[nums[i]]++;
        
      }
     
      return ans.size();
    }
};