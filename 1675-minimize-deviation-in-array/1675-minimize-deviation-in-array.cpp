class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
      priority_queue<int>p;
      int minn=INT_MAX;
      for(int i=0;i<n;i++)
      {
        if(nums[i]%2==0)
        {
          p.push(nums[i]);
          minn=min(minn,nums[i]);
        }
        else
        {
            p.push(nums[i]*2);
          minn=min(minn,nums[i]*2);
        }
      }
      int ans=INT_MAX;
      while(!p.empty())
      {
        int topp=p.top();
        p.pop();
        ans=min(ans,topp-minn);
        if(topp%2!=0){
                break;
            }
            minn = min(minn,topp/2);
            p.push(topp/2);
        }
      return ans;
      }
    
};