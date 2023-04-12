class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
      map<int,int>m;
      vector<int>ans;
        int n=nums.size();
      for(int i=0;i<n;i++)
      {
        if(m.count(t-nums[i])!=0)
        {
          ans.push_back(m[t-nums[i]]);
          ans.push_back(i);
        }
        else m[nums[i]]=i;
      }
      return ans;
        
    }
};