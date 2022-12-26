class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i++)
          {
            nums[i]+=nums[i-1];
          }
      vector<int>ans;
      for(int i=0;i<q.size();i++)
      {
        int a=upper_bound(nums.begin(),nums.end(),q[i])-nums.begin();
        ans.push_back(a);
        
      }
      return ans;
    }
};