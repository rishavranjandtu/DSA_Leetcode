class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      vector<string>ans;
      if(nums.size()==0) return ans;
        int start=nums[0];
      int prev=nums[0];
      int n=nums.size();
      for(int i=1;i<n;i++)
      {
        if(prev+1!=nums[i])
        {
          if(start!=prev) ans.push_back(to_string(start)+"->"+to_string(prev));
          else ans.push_back(to_string(start));
          start=nums[i]; 
        }
        prev=nums[i]; 
      }
      if(start==nums[n-1]) ans.push_back(to_string(nums[n-1]));
      else ans.push_back(to_string(start)+"->"+to_string(prev));
      return ans;
    }
};