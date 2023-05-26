class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      int n=nums.size();
      stack<int>s;
      vector<int>ans(n,0);
      s.push(nums[n-1]);
      for(int i=2*n-2;i>=0;i--)
      {
        while(!s.empty()&&nums[i%n]>=s.top()) s.pop();
        if(i<n) 
        {
          if(s.empty()) ans[i]=-1;
          else ans[i]=s.top();
        }
        s.push(nums[i%n]);
      }
        return ans;
    }
};