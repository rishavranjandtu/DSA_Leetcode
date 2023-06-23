class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        vector<unordered_map<int,int>>v(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<i;j++)
          {
            int d=nums[i]-nums[j];
            if(v[j].count(d)>0) v[i][d]=v[j][d]+1;
            else v[i][d]=2;
            ans=max(ans,v[i][d]);
          }
        }
      return ans;
    }
};