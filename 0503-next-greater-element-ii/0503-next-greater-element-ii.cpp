class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      int n=nums.size();
      vector<int>v(2*n,0);
      for(int i=0;i<n;i++)
      {
        v[i]=nums[i];
        v[n+i]=nums[i];
      }
      stack<int>s;
      vector<int>ans(n,0);
      s.push(nums[n-1]);
      for(int i=2*n-2;i>=0;i--)
      {
        while(!s.empty()&&v[i]>=s.top()) s.pop();
        if(i<n) 
        {
          if(s.empty()) ans[i]=-1;
          else ans[i]=s.top();
        }
        s.push(v[i]);
      }
        return ans;
    }
};